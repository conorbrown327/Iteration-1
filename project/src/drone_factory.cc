#include "drone_factory.h"

namespace csci3081
{

IEntity* DroneFactory::CreateEntity(const picojson::object& val)
{
    std::vector<float> position = JsonHelper::GetStdFloatVector(val, "position");
    std::vector<float> direction = JsonHelper::GetStdFloatVector(val, "direction");
    return new Drone(position, direction, val);
}

}   // namespace csci3081

/*
if (JsonHelper::GetString(val, "type") == "drone") {
    std::vector<float> position = JsonHelper::GetStdFloatVector(val, "position");
    std::vector<float> direction = JsonHelper::GetStdFloatVector(val, "direction");
    return new Drone(position, direction, val);
    */