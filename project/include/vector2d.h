#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <vector>
#include <string>
//#include "entity_base.h"

namespace csci3081 
{

class Vector2d
{
    public:
        Vector2d();
        Vector2d(float x, float y);

        float GetDirection();
        float GetMagnitude();
        void Normalize();

        float GetX();
        void SetX(float x);
        float GetY();
        void SetY(float y);

    private:
        float x_;
        float y_;

};

}

#endif  // VECTOR2D_H

