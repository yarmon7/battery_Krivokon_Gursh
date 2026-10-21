#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QColor>
#include <QDoubleSpinBox>
#include <QPainter>
#include <QPixmap>
#include <QPushButton>
#include <QSpinBox>
#include <QStatusBar>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->consumeButton, &QPushButton::clicked, this, &MainWindow::consumeCapacity);
    connect(ui->cellCountSpinBox, &QSpinBox::valueChanged, this, &MainWindow::resetBattery);
    connect(ui->voltageSpinBox, &QDoubleSpinBox::valueChanged, this, &MainWindow::resetBattery);
    connect(ui->capacitySpinBox, &QDoubleSpinBox::valueChanged, this, &MainWindow::resetBattery);

    resetBattery();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resetBattery()
{
    battery = Battery(ui->cellCountSpinBox->value(),
                      ui->voltageSpinBox->value(),
                      ui->capacitySpinBox->value());
    updateResults();
}

void MainWindow::consumeCapacity()
{
    const double value = ui->consumptionSpinBox->value();
    if (value <= 0.0) {
        ui->statusbar->showMessage("Введите положительное значение расхода", 3000);
        return;
    }

    battery.consume(value);
    updateResults();
}

void MainWindow::updateResults()
{
    ui->chargePercentageLabel->setText(
        QString::number(battery.get_percentage(), 'f', 1) + " %");
    ui->chargeStatusLabel->setText(battery.is_low() ? "LOW" : "NORMAL");
    ui->remainingCapacityLabel->setText(
        QString::number(battery.get_remaining_capacity(), 'f', 1) + " мА·ч");
    ui->remainingPercentageLabel->setText(
        QString::number(battery.get_remaining_percentage(), 'f', 1) + " %");
    updateBatteryIcon();
}

void MainWindow::updateBatteryIcon()
{
    const double percentage = battery.get_remaining_percentage();
    const QColor color = percentage > 50.0 ? QColor("#2e9e57")
                       : percentage > 20.0 ? QColor("#e5a321")
                                           : QColor("#d94b4b");

    QPixmap icon(150, 60);
    icon.fill(Qt::transparent);

    QPainter painter(&icon);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(QPen(QColor("#333333"), 2));
    painter.setBrush(Qt::NoBrush);
    painter.drawRoundedRect(QRect(4, 8, 130, 44), 5, 5);
    painter.setBrush(QColor("#333333"));
    painter.drawRect(QRect(136, 20, 10, 20));

    const int fillWidth = static_cast<int>(120.0 * percentage / 100.0);
    painter.fillRect(QRect(9, 13, fillWidth, 34), color);
    painter.end();

    ui->batteryIconLabel->setPixmap(icon);
}
