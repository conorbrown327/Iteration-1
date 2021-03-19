/**
 *@file vector3d.h
 */
#ifndef VECTOR_H
#define VECTOR_H

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <vector>
#include <string>

namespace csci3081 {

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief This class defines Vector3d.
 *
 * This class defines the object Vector3d to be used to determine positons
 * for instances of EntityBase objects.
 */
class Vector3d{
 public:
    Vector3d();
    Vector3d(float x, float y, float z);

    Vector3d* Normalize();
    float Magnitude();

    void SetX(float x);
    float GetX();
    void SetY(float y);
    float GetY();
    void SetZ(float z);
    float GetZ();

  private:
    float x_, y_, z_;
};

}  // namespace csci3081

#endif  // VECTOR_H