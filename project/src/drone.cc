#include "drone.h"

namespace csci3081 {

Drone::Drone()
{
  name_ = "name";
  std::vector<float> position (3);
  std::fill(position.begin(), position.end(), 0.0);
  std::vector<float> direction (3);
  std::fill(direction.begin(), direction.end(), 0.0);
  position_ = position;
  direction_ = direction;
  radius_ = 1.0;
  id_ = 0;
  version_ = 0;
  dynamic_ = true;
  battery_ = new Battery();
  speed_ = 0.0;
}

Drone::Drone(std::vector<float> position, std::vector<float> direction, 
             const picojson::object& details) 
{
  position_ = position;
  direction_ = direction;
  battery_ = new Battery();
  radius_ = 1.0;
  dynamic_ = true;

  // The following line saves the json object in the details_ member variable
  // from the EntityBase class, in order to return it later in GetDetails()
  details_ = details;
}

Battery* Drone::GetBattery() { return battery_; }
void Drone::SetBattery(Battery* battery) { battery_ = battery; }

float Drone::GetSpeed() { return speed_; }
void Drone::SetSpeed(float speed) { speed_ = speed; }
}  // namespace csci3081