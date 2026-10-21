#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <iosfwd>

class Vector3D
{
public:
    Vector3D();
    Vector3D(double x_value, double y_value, double z_value);

    double x_value() const;
    double y_value() const;
    double z_value() const;
    double length() const;
    void print() const;

    Vector3D operator+(const Vector3D &other) const;
    Vector3D operator-(const Vector3D &other) const;
    Vector3D operator*(double factor) const;
    bool operator==(const Vector3D &other) const;

    friend std::ostream &operator<<(std::ostream &output, const Vector3D &vector);

private:
    double x;
    double y;
    double z;
};

#endif // VECTOR3D_H
