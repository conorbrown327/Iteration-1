#include "customer.h"
#include "vector3d.h"

namespace csci3081 
{

Customer::Customer()
{
    name_ = "name";
    position_.push_back(0.0);
    position_.push_back(0.0);
    position_.push_back(0.0);
}
}  // namespace csci3081
