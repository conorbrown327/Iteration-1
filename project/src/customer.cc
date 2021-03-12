#include "customer.h"
#include "vector3d.h"

namespace csci3081 {
Customer::Customer()
{
    location = new Vector3d();
}

void Customer::SetLocation(Vector3d *location) {this->location = location;}
Vector3d Customer::GetLocation() {return *location;}
}
