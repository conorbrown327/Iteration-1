#include "customer_factory.h"

namespace csci3081
{

IEntity* CustomerFactory::CreateEntity(const picojson::object& val)
{
    std::vector<float> position = JsonHelper::GetStdFloatVector(val, "position");
    std::vector<float> direction = JsonHelper::GetStdFloatVector(val, "direction");
    return new Customer(position, direction, val);
}

}   // namespace csci3081