#include "vector3d.h"

#include <cmath>
#include <iostream>

Vector3D::Vector3D()
    : x(0.0), y(0.0), z(0.0)
{
}

Vector3D::Vector3D(double x_value, double y_value, double z_value)
    : x(x_value), y(y_value), z(z_value)
{
}

double Vector3D::x_value() const
{
    return x;
}

double Vector3D::y_value() const
{
    return y;
}

double Vector3D::z_value() const
{
    return z;
}

double Vector3D::length() const
{
    return std::sqrt(x * x + y * y + z * z);
}

void Vector3D::print() const
{
    std::cout << *this << '\n';
}

Vector3D Vector3D::operator+(const Vector3D &other) const
{
    return Vector3D(x + other.x, y + other.y, z + other.z);
}

Vector3D Vector3D::operator-(const Vector3D &other) const
{
    return Vector3D(x - other.x, y - other.y, z - other.z);
}

Vector3D Vector3D::operator*(double factor) const
{
    return Vector3D(x * factor, y * factor, z * factor);
}

bool Vector3D::operator==(const Vector3D &other) const
{
    constexpr double tolerance = 0.000001;
    return std::abs(x - other.x) < tolerance
        && std::abs(y - other.y) < tolerance
        && std::abs(z - other.z) < tolerance;
}

std::ostream &operator<<(std::ostream &output, const Vector3D &vector)
{
    return output << '(' << vector.x << ", " << vector.y << ", " << vector.z << ')';
}
