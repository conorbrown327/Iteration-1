#ifndef PACKAGE_H
#define PACKAGE_H

#include "customer.h"
#include "vector3d.h"
#include <vector>
#include <string>

namespace csci3081 {

class Package{
 public:
    Package();

    void SetCustomer(Customer *customer);
    Customer GetCustomer();
    void SetLocation(Vector3d *location);
    Vector3d GetLocation();
    void SetWeight(float weight);
    float GetWeight();

  private:
    Customer *customer;
    Vector3d *location;
    float weight;
};

}

#endif  // PACKAGE_H