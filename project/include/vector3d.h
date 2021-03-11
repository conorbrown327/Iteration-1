#include <vector>
#include <string>

namespace csci3081 {

class Vector3d{
 public:
    Vector3d();
    Vector3d(float x, float y, float z);

    Vector3d Normalize();
    float Magnitude();

    void SetX(float x);
    float GetX();
    void SetY(float y);
    float GetY();
    void SetZ(float z);
    float GetZ();

  private:
    float x, y, z;
};

}