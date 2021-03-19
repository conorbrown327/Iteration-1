/**
 *@file vector2d.h
 */
#ifndef VECTOR2D_H
#define VECTOR2D_H

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <vector>
#include <string>

namespace csci3081 
{

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief This class defines Vector2d.
 *
 * This class is currently not used in this implementation.
 */
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

}  // namespace csci3081

#endif  // VECTOR2D_H

