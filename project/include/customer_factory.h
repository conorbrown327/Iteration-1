/**
 *@file customer_factory.h
 */
#ifndef CUSTOMER_FACTORY_H
#define CUSTOMER_FACTORY_H

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <EntityProject/facade/delivery_system.h>
#include "customer.h"
#include "json_helper.h"

namespace csci3081 {
/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief This class defines customer factory used to create customers.
 *
 * 
 */
class CustomerFactory : public IEntityFactory
{
    public:
        IEntity* CreateEntity(const picojson::object& val);

    private:
};
} // namespace csci3081

#endif  // CUSTOMER_FACTORY_H