#ifndef PACKAGE_H
#define PACKAGE_H

//#include "entity_base.h"
//#include "customer.h"
#include "vector3d.h"
#include <vector>
#include <string>

namespace csci3081 {

class Package /*: public csci3081::EntityBase*/{
  public:
    Package();

    const std::string& GetName();

    int GetId() const;

    float GetRadius() const;

    int GetVersion() const;

    bool IsDynamic() const;

   // void SetCustomer(Customer *customer);
   // Customer* GetCustomer();

    void SetPosition(Vector3d *position);
    Vector3d* GetPosition();
    
    void SetWeight(float weight);
    float GetWeight();

  private:
    //Customer *customer;
    std::string name;
    Vector3d *position;
    float weight;
};

}

#endif  // PACKAGE_H