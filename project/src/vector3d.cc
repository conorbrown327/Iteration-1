#include "vector3d.h"

namespace csci3081 {

Vector3d::Vector3d()
{
    x_ = 0.0;
    y_ = 0.0;
    z_ = 0.0;
}

Vector3d::Vector3d(float x, float y, float z)
{
    x_ = x;
    y_ = y;
    z_ = z;
}

Vector3d* Vector3d::Normalize()
{
    return new Vector3d(1.0, 1.0, 1.0);
}

float Vector3d::Magnitude()
{
    return 0.0;
}

void Vector3d::SetX(float x) { x_ = x; }
float Vector3d::GetX() { return x_; }
void Vector3d::SetY(float y) { y_ = y; }
float Vector3d::GetY() { return y_; }
void Vector3d::SetZ(float z) { z_ = z; }
float Vector3d::GetZ() { return z_; }
}