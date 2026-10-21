#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "flightpathview.h"
#include "vector3d.h"

#include <QString>

#include <algorithm>
#include <cmath>
#include <limits>

namespace {
QString format_number(double value)
{
    return QString::number(value, 'f', 3);
}

QString format_vector(const Vector3D &vector, const QString &unit)
{
    return QStringLiteral("(%1, %2, %3) %4")
        .arg(format_number(vector.x_value()),
             format_number(vector.y_value()),
             format_number(vector.z_value()),
             unit);
}
} // namespace

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->calculateVelocityButton, &QPushButton::clicked,
            this, &MainWindow::calculate_velocity);
    connect(ui->calculateRouteButton, &QPushButton::clicked,
            this, &MainWindow::calculate_route);

    calculate_velocity();
    calculate_route();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculate_velocity()
{
    const Vector3D drone_velocity(ui->droneXSpinBox->value(),
                                  ui->droneYSpinBox->value(),
                                  ui->droneZSpinBox->value());
    const Vector3D wind_velocity(ui->windXSpinBox->value(),
                                 ui->windYSpinBox->value(),
                                 ui->windZSpinBox->value());
    const Vector3D ground_velocity = drone_velocity + wind_velocity;
    const Vector3D correction = ground_velocity * 0.8;

    ui->airVelocityValue->setText(format_vector(drone_velocity, QStringLiteral("м/с")));
    ui->windVelocityValue->setText(format_vector(wind_velocity, QStringLiteral("м/с")));
    ui->groundVelocityValue->setText(format_vector(ground_velocity, QStringLiteral("м/с")));
    ui->groundSpeedValue->setText(format_number(ground_velocity.length()) + QStringLiteral(" м/с"));
    ui->correctionValue->setText(format_vector(correction, QStringLiteral("м/с")));

    const double air_speed = drone_velocity.length();
    const double wind_speed = wind_velocity.length();
    const double wind_percent = air_speed > 0.0
        ? wind_speed / air_speed * 100.0
        : (wind_speed > 0.0 ? std::numeric_limits<double>::infinity() : 0.0);
    const int scale_value = std::isfinite(wind_percent)
        ? static_cast<int>(std::clamp(wind_percent, 0.0, 100.0))
        : 100;
    ui->windRiskBar->setValue(scale_value);

    QString risk_level;
    QString risk_color;
    if (wind_percent >= 75.0) {
        risk_level = QStringLiteral("Критично");
        risk_color = QStringLiteral("#d84545");
    } else if (wind_percent >= 50.0) {
        risk_level = QStringLiteral("Высокий риск");
        risk_color = QStringLiteral("#e88639");
    } else if (wind_percent >= 25.0) {
        risk_level = QStringLiteral("Умеренный риск");
        risk_color = QStringLiteral("#e5b940");
    } else {
        risk_level = QStringLiteral("Низкий риск");
        risk_color = QStringLiteral("#42ad6a");
    }
    ui->windRiskBar->setStyleSheet(
        QStringLiteral("QProgressBar { text-align: center; } "
                       "QProgressBar::chunk { background-color: %1; }").arg(risk_color));
    if (!std::isfinite(wind_percent)) {
        ui->windRiskValue->setText(risk_level + QStringLiteral(": есть ветер, воздушная скорость равна нулю"));
    } else {
        ui->windRiskValue->setText(
            risk_level + QStringLiteral(": ветер составляет ")
            + QString::number(wind_percent, 'f', 1)
            + QStringLiteral("% от воздушной скорости"));
    }
}

void MainWindow::calculate_route()
{
    const Vector3D start(ui->startXSpinBox->value(),
                         ui->startYSpinBox->value(),
                         ui->startZSpinBox->value());
    const Vector3D finish(ui->finishXSpinBox->value(),
                          ui->finishYSpinBox->value(),
                          ui->finishZSpinBox->value());
    const Vector3D displacement = finish - start;
    const Vector3D check = start + displacement;

    ui->displacementValue->setText(format_vector(displacement, QStringLiteral("м")));
    ui->deltaXValue->setText(format_number(displacement.x_value()) + QStringLiteral(" м"));
    ui->deltaYValue->setText(format_number(displacement.y_value()) + QStringLiteral(" м"));
    ui->deltaZValue->setText(format_number(displacement.z_value()) + QStringLiteral(" м"));
    ui->displacementLengthValue->setText(format_number(displacement.length()) + QStringLiteral(" м"));
    ui->routeCheckValue->setText(check == finish
                                    ? QStringLiteral("Да, конечная точка совпадает")
                                    : QStringLiteral("Нет, конечная точка не совпадает"));

    const FlightBounds bounds{
        ui->xMinSpinBox->value(), ui->xMaxSpinBox->value(),
        ui->yMinSpinBox->value(), ui->yMaxSpinBox->value(),
        ui->zMinSpinBox->value(), ui->zMaxSpinBox->value()
    };
    if (bounds.x_min >= bounds.x_max || bounds.y_min >= bounds.y_max
        || bounds.z_min >= bounds.z_max) {
        ui->flightPathView->clearScene();
        ui->routeBoundsStatusLabel->setText(
            QStringLiteral("Ошибка: минимум каждой оси должен быть меньше максимума."));
        ui->routeBoundsStatusLabel->setStyleSheet(QStringLiteral("color: #b83232;"));
        return;
    }

    ui->flightPathView->setScene(start, finish, bounds);
    const auto point_inside = [&bounds](const Vector3D &point) {
        return point.x_value() >= bounds.x_min && point.x_value() <= bounds.x_max
            && point.y_value() >= bounds.y_min && point.y_value() <= bounds.y_max
            && point.z_value() >= bounds.z_min && point.z_value() <= bounds.z_max;
    };
    if (point_inside(start) && point_inside(finish)) {
        ui->routeBoundsStatusLabel->setText(QStringLiteral("Маршрут полностью внутри заданной области."));
        ui->routeBoundsStatusLabel->setStyleSheet(QStringLiteral("color: #238451;"));
    } else {
        ui->routeBoundsStatusLabel->setText(
            QStringLiteral("Маршрут выходит за границы области; расширьте диапазоны для полного отображения."));
        ui->routeBoundsStatusLabel->setStyleSheet(QStringLiteral("color: #b77318;"));
    }
}
