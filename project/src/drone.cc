#include "drone.h"

namespace csci3081 {

/*Drone::Drone()
{
  name_ = "name";
  /*std::vector<float> position_ (3);
  std::fill(position.begin(), position.end(), 0);
  std::vector<float> direction (3);
  std::fill(direction.begin(), direction.end(), 0);
  this->position = position;
  this->direction = direction;
}*/

Drone::Drone(std::vector<float> position, std::vector<float> direction, 
             const picojson::object& details) 
{
  name_ = "name";
  position_.push_back(0.0);
  position_.push_back(0.0);
  position_.push_back(0.0);

  direction_.push_back(0.0);
  direction_.push_back(0.0);
  direction_.push_back(0.0);

  // The following line saves the json object in the details_ member variable
  // from the EntityBase class, in order to return it later in GetDetails()
  details_ = details;
  battery_ = new Battery();
}
}  // namespace csci3081