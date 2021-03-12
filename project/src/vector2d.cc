#include "vector2d.h"

namespace csci3081 {

Vector2d::Vector2d()
{
    this->vec = new Vector3d(0.0, 0.0, 0.0);
}

Vector2d::Vector2d(float x, float z)
{
    this->vec = new Vector3d(x, 0.0, z);
}

Vector3d* Vector2d::GetVec() {return vec;}
void Vector2d::SetVec(Vector3d* vec) {this->vec = vec;}
}