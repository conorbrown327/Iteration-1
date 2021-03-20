#include "package_factory.h"

namespace csci3081
{

IEntity* PackageFactory::CreateEntity(const picojson::object& val)
{
    std::vector<float> position = JsonHelper::GetStdFloatVector(val, "position");
    std::vector<float> direction = JsonHelper::GetStdFloatVector(val, "direction");
    return new Package(position, direction, val);
}

}   // namespace csci3081