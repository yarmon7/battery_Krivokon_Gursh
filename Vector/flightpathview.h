#ifndef FLIGHTPATHVIEW_H
#define FLIGHTPATHVIEW_H

#include "vector3d.h"

#include <QPoint>
#include <QPointF>
#include <QSize>
#include <QWidget>

struct FlightBounds
{
    double x_min;
    double x_max;
    double y_min;
    double y_max;
    double z_min;
    double z_max;
};

class FlightPathView final : public QWidget
{
public:
    explicit FlightPathView(QWidget *parent = nullptr);

    void setScene(const Vector3D &start, const Vector3D &finish, const FlightBounds &bounds);
    void clearScene();
    QSize minimumSizeHint() const override;

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override;

private:
    QPointF project(const Vector3D &point) const;

    Vector3D start_;
    Vector3D finish_;
    FlightBounds bounds_{0.0, 300.0, 0.0, 200.0, 0.0, 150.0};
    QPoint last_mouse_pos_;
    double yaw_ = 0.5;
    double pitch_ = 0.45;
    double zoom_ = 1.0;
    bool has_scene_ = false;
    bool dragging_ = false;
};

#endif // FLIGHTPATHVIEW_H
