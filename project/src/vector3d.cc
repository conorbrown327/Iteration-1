#include "vector3d.h"

namespace csci3081 {

Vector3d::Vector3d()
{
    x = 0;
    y = 0;
    z = 0;
}

Vector3d::Vector3d(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector3d Vector3d::Normalize()
{
    return Vector3d();
}

float Vector3d::Magnitude()
{
    return 0.0;
}

void Vector3d::SetX(float x) {this->x = x;}
float Vector3d::GetX() {return x;}
void Vector3d::SetY(float y) {this->y = y;}
float Vector3d::GetY() {return y;}
void Vector3d::SetZ(float z) {this->z = z;}
float Vector3d::GetZ() {return z;}
}