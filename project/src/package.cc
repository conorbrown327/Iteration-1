#include "package.h"

namespace csci3081 {

Package::Package()
{
    // customer = new Customer();
    name = "name";
    position = new Vector3d();
    weight = 0.0;
}

const std::string& Package::GetName() {
  // TODO for lab10: What should this return?
  return name;
}

int Package::GetId() const {
  // TODO: This is just a stub for compilation
  return 0;
}

float Package::GetRadius() const {
  // TODO: This is just a stub for compilation
  return 1;
}

int Package::GetVersion() const {
  // TODO: This is just a stub for compilation
  return 0;
}

bool Package::IsDynamic() const {
  // TODO: This is just a stub for compilation
  return true;
}

//void Package::SetCustomer(Customer *customer) {this->customer = customer;}
//Customer* Package::GetCustomer() {return customer;}

void Package::SetPosition(Vector3d *position) {this->position = position;}
Vector3d* Package::GetPosition() {return position;}

void Package::SetWeight(float weight) {this->weight = weight;}
float Package::GetWeight() {return weight;}
}