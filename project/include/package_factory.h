/**
 *@file package_factory.h
 */
#ifndef PACKAGE_FACTORY_H
#define PACKAGE_FACTORY_H

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <EntityProject/facade/delivery_system.h>
#include "package.h"
#include "json_helper.h"

namespace csci3081 {
/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief This class defines the package factory used to create packages.
 *
 * 
 */
class PackageFactory : public IEntityFactory
{
    public:
        /** Overwite the abstract function CreateEntity
         * to create a package entity.
         */
        IEntity* CreateEntity(const picojson::object& val);

    private:
};
} // namespace csci3081

#endif  // PACKAGE_FACTORY_H