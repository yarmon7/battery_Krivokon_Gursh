#include "flightpathview.h"

#include <QLinearGradient>
#include <QMouseEvent>
#include <QPainter>
#include <QPolygonF>
#include <QWheelEvent>

#include <algorithm>
#include <array>
#include <cmath>

FlightPathView::FlightPathView(QWidget *parent)
    : QWidget(parent)
{
    setCursor(Qt::OpenHandCursor);
    setToolTip(tr("Перетащите для поворота, прокрутите для изменения масштаба"));
}

void FlightPathView::setScene(const Vector3D &start, const Vector3D &finish,
                              const FlightBounds &bounds)
{
    start_ = start;
    finish_ = finish;
    bounds_ = bounds;
    has_scene_ = true;
    update();
}

void FlightPathView::clearScene()
{
    has_scene_ = false;
    update();
}

QSize FlightPathView::minimumSizeHint() const
{
    return QSize(480, 290);
}

QPointF FlightPathView::project(const Vector3D &point) const
{
    const auto normalized = [](double value, double minimum, double maximum) {
        return std::clamp(2.0 * (value - minimum) / (maximum - minimum) - 1.0,
                          -4.0, 4.0);
    };
    const double x = normalized(point.x_value(), bounds_.x_min, bounds_.x_max);
    const double y = normalized(point.y_value(), bounds_.y_min, bounds_.y_max);
    const double z = normalized(point.z_value(), bounds_.z_min, bounds_.z_max);
    const double horizontal = std::cos(yaw_) * x - std::sin(yaw_) * y;
    const double depth = std::sin(yaw_) * x + std::cos(yaw_) * y;
    const double vertical = std::cos(pitch_) * z - std::sin(pitch_) * depth;
    const double scale = std::min((width() - 70.0) / 3.2,
                                  (height() - 48.0) / 3.1) * zoom_;
    return QPointF(width() / 2.0 + horizontal * scale,
                   height() / 2.0 - vertical * scale);
}

void FlightPathView::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    QLinearGradient background(0, 0, 0, height());
    background.setColorAt(0.0, QColor("#14283c"));
    background.setColorAt(1.0, QColor("#091522"));
    painter.fillRect(rect(), background);

    if (!has_scene_) {
        painter.setPen(QColor("#e8eef5"));
        painter.drawText(rect(), Qt::AlignCenter, tr("Задайте корректные границы области"));
        return;
    }

    const double xmin = bounds_.x_min;
    const double xmax = bounds_.x_max;
    const double ymin = bounds_.y_min;
    const double ymax = bounds_.y_max;
    const double zmin = bounds_.z_min;
    const double zmax = bounds_.z_max;
    const std::array<Vector3D, 8> corners = {
        Vector3D(xmin, ymin, zmin), Vector3D(xmax, ymin, zmin),
        Vector3D(xmax, ymax, zmin), Vector3D(xmin, ymax, zmin),
        Vector3D(xmin, ymin, zmax), Vector3D(xmax, ymin, zmax),
        Vector3D(xmax, ymax, zmax), Vector3D(xmin, ymax, zmax)
    };

    painter.setPen(QPen(QColor("#35516a"), 1, Qt::DashLine));
    for (int step = 0; step <= 10; ++step) {
        const double fraction = step / 10.0;
        const double x = xmin + fraction * (xmax - xmin);
        const double y = ymin + fraction * (ymax - ymin);
        painter.drawLine(project(Vector3D(x, ymin, zmin)),
                         project(Vector3D(x, ymax, zmin)));
        painter.drawLine(project(Vector3D(xmin, y, zmin)),
                         project(Vector3D(xmax, y, zmin)));
    }

    painter.setPen(QPen(QColor("#6d879f"), 1));
    for (int index = 0; index < 4; ++index) {
        painter.drawLine(project(corners[index]), project(corners[(index + 1) % 4]));
        painter.drawLine(project(corners[index + 4]),
                         project(corners[(index + 1) % 4 + 4]));
        painter.drawLine(project(corners[index]), project(corners[index + 4]));
    }

    const auto draw_axis = [&painter, this](const Vector3D &from, const Vector3D &to,
                                            const QColor &color, const QString &name) {
        const QPointF end = project(to);
        painter.setPen(QPen(color, 2.5));
        painter.drawLine(project(from), end);
        painter.setPen(color);
        painter.drawText(end + QPointF(5, -5), name);
    };
    draw_axis(corners[0], corners[1], QColor("#ff7878"), QStringLiteral("X"));
    draw_axis(corners[0], corners[3], QColor("#83dc91"), QStringLiteral("Y"));
    draw_axis(corners[0], corners[4], QColor("#80b7ff"), QStringLiteral("Z"));

    const QPointF start_point = project(start_);
    const QPointF finish_point = project(finish_);
    painter.setPen(QPen(QColor("#ffd166"), 4, Qt::SolidLine, Qt::RoundCap));
    painter.drawLine(start_point, finish_point);

    const QPointF route = finish_point - start_point;
    const double route_length = std::hypot(route.x(), route.y());
    if (route_length > 15.0) {
        const QPointF direction = route / route_length;
        const QPointF perpendicular(-direction.y(), direction.x());
        QPolygonF arrow;
        arrow << finish_point
              << finish_point - direction * 14.0 + perpendicular * 6.0
              << finish_point - direction * 14.0 - perpendicular * 6.0;
        painter.setPen(Qt::NoPen);
        painter.setBrush(QColor("#ffd166"));
        painter.drawPolygon(arrow);
    }

    painter.setPen(QPen(QColor("#e8eef5"), 1.5));
    painter.setBrush(QColor("#43d9c2"));
    painter.drawEllipse(start_point, 6, 6);
    painter.drawText(start_point + QPointF(9, -9), tr("Старт"));
    painter.setBrush(QColor("#ffb35c"));
    painter.drawEllipse(finish_point, 6, 6);
    painter.drawText(finish_point + QPointF(9, -9), tr("Финиш"));
}

void FlightPathView::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        dragging_ = true;
        last_mouse_pos_ = event->pos();
        setCursor(Qt::ClosedHandCursor);
    }
}

void FlightPathView::mouseMoveEvent(QMouseEvent *event)
{
    if (!dragging_)
        return;
    const QPoint movement = event->pos() - last_mouse_pos_;
    yaw_ += movement.x() * 0.01;
    pitch_ = std::clamp(pitch_ + movement.y() * 0.01, -1.25, 1.25);
    last_mouse_pos_ = event->pos();
    update();
}

void FlightPathView::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        dragging_ = false;
        setCursor(Qt::OpenHandCursor);
    }
}

void FlightPathView::wheelEvent(QWheelEvent *event)
{
    zoom_ = std::clamp(zoom_ * (event->angleDelta().y() > 0 ? 1.1 : 0.9),
                       0.6, 1.8);
    update();
    event->accept();
}
