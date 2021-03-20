/**
 *@file composite_factory.h
 */
#ifndef COMPOSITE_FACTORY_H
#define COMPOSITE_FACTORY_H

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <EntityProject/facade/delivery_system.h>
#include <vector>
#include <string>

namespace csci3081 {
/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief This class defines compoisite factory used to create entities.
 *
 * 
 */
class CompositeFactory : public IEntityFactory
{
    public:
        /** Add a factory to the factories_ vector
         * to later create an object of that factory type.
         */
        void AddFactory(IEntityFactory* factory);
        /** Will loop through all factories in factories vector
         *  and create all objects specified for the simulation.
         */
        IEntity* CreateEntity(const picojson::object& val);

        std::vector<IEntityFactory*> GetFactories();
        void SetFactories(std::vector<IEntityFactory*> factories);

    private:
        std::vector<IEntityFactory*> factories_;
};
} // namespace csci3081

#endif  // COMPOSITE_FACTORY_H