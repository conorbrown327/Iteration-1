#include <vector>
#include <string>
#include "vector3d.h"

namespace csci3081 {

class Customer{
 public:
    Customer();

    void SetLocation(Vector3d *location);
    Vector3d GetLocation();

  private:
    Vector3d *location;
};

}