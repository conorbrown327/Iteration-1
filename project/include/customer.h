/**
 *@file customer.h
 */
#ifndef CUSTOMER_H
#define CUSTOMER_H

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <vector>
#include <string>
#include "vector3d.h"
#include "entity_base.h"

namespace csci3081 
{

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief This class defines Customer.
 *
 * This class defines the object Customer for the drone delivery simulation.
 * Customer inherits from EntityBase and includes information about the customer
 * like the position to deliver to.
 */
class Customer : public csci3081::EntityBase{
 public:
    Customer();
    Customer(std::vector<float> pos, std::vector<float> direction, const picojson::object& obj);
};

}  // namespace csci3081

#endif  // CUSTOMER_H
