#include "customer.h"
#include "vector3d.h"

namespace csci3081 {
Customer::Customer()
{
    name = "name";
    position = new Vector3d();
}

const std::string& Customer::GetName() {
  // TODO for lab10: What should this return?
  return name;
}

int Customer::GetId() const {
  // TODO: This is just a stub for compilation
  return 0;
}

float Customer::GetRadius() const {
  // TODO: This is just a stub for compilation
  return 1;
}

int Customer::GetVersion() const {
  // TODO: This is just a stub for compilation
  return 0;
}

bool Customer::IsDynamic() const {
  // TODO: This is just a stub for compilation
  return true;
}

void Customer::SetPosition(Vector3d *position) {this->position = position;}
Vector3d* Customer::GetPosition() {return position;}
}
