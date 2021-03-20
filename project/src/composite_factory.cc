#include "composite_factory.h"

namespace csci3081
{

void CompositeFactory::AddFactory(IEntityFactory* factory)
{
    factories_.push_back(factory);
}

IEntity* CompositeFactory::CreateEntity(const picojson::object& val)
{
    IEntity* entityCreated = NULL;
    
    for(IEntityFactory* ief : factories_)
    {
        entityCreated = ief->CreateEntity(val);
    }

    return entityCreated;
}

std::vector<IEntityFactory*> CompositeFactory::GetFactories() { return factories_; }

void CompositeFactory::SetFactories(std::vector<IEntityFactory*> factories)
{
    factories_ = factories;
}

}   // namespace csci3081