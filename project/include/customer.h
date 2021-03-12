#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <vector>
#include <string>
#include "vector3d.h"
//#include "entity_base.h"

namespace csci3081 
{

class Customer /*: public csci3081::EntityBase*/{
 public:
    Customer();

    const std::string& GetName();

    int GetId() const;

    float GetRadius() const;

    int GetVersion() const;

    bool IsDynamic() const;

    void SetPosition(Vector3d *position);
    Vector3d* GetPosition();

  private:
    std::string name;
    Vector3d *position;
};

}

#endif  // CUSTOMER_H
