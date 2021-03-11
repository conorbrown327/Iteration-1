#include "package.h"

namespace csci3081 {

Package::Package()
{
    customer = new Customer();
    location = new Vector3d();
    weight = 0.0;
}

void Package::SetCustomer(Customer *customer) {this->customer = customer;}
Customer Package::GetCustomer() {return *customer;}
void Package::SetLocation(Vector3d *location) {this->location = location;}
Vector3d Package::GetLocation() {return *location;}
void Package::SetWeight(float weight) {this->weight = weight;}
float Package::GetWeight() {return weight;}
}