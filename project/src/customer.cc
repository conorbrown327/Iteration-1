#include "customer.h"
#include "vector3d.h"

namespace csci3081 
{

Customer::Customer()
{
    name_ = "name";
    std::vector<float> position (3);
    std::fill(position.begin(), position.end(), 0.0);
    std::vector<float> direction (3);
    std::fill(direction.begin(), direction.end(), 0.0);
    position_ = position;
    direction_ = direction;
    radius_ = 1.0;
    id_ = 0;
    version_ = 0;
    dynamic_ = true;
}
}  // namespace csci3081
