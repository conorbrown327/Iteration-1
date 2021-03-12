#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <vector>
#include <string>
#include "vector3d.h"
//#include "entity_base.h"

namespace csci3081 
{

class Vector2d
{
    public:
        Vector2d();
        Vector2d(float x, float z);

        Vector3d* GetVec();
        void SetVec(Vector3d* vec);

    private:
        Vector3d* vec;

};

}

#endif  // VECTOR2D_H

