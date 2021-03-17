#include "vector2d.h"

namespace csci3081 {

Vector2d::Vector2d()
{
    x_ = 0.0;
    y_ = 0.0;
}

Vector2d::Vector2d(float x, float y)
{
    x_ = x;
    y_ = y;
}

float Vector2d::GetDirection() {return 0.0;}
float Vector2d::getMagnitude() {return 0.0;}
void Vector2d::Normalize() {;}

float Vector2d::GetX() {return x_;}
void Vector2d::SetX(float x) {x_ = x;}
float Vector2d::GetY() {return y_;}
void Vector2d::SetY(float y) {y_ = y;}
}