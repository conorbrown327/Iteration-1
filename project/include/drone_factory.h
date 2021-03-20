/**
 *@file drone_factory.h
 */
#ifndef DRONE_FACTORY_H
#define DRONE_FACTORY_H

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <EntityProject/facade/delivery_system.h>
#include "drone.h"
#include "json_helper.h"
#include <vector>
#include <string>

namespace csci3081 {
/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief This class defines drone factory used to create drones.
 *
 * 
 */
class DroneFactory : public IEntityFactory
{
    public:
        IEntity* CreateEntity(const picojson::object& val);

    private:
};
} // namespace csci3081

#endif  // DRONE_FACTORY_H