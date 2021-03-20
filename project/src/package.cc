#include "package.h"

namespace csci3081 {

Package::Package()
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
    weight_ = 0.0;
}

Package::Package(std::vector<float> position, std::vector<float> direction, 
             const picojson::object& details) 
{
  position_ = position;
  direction_ = direction;
  radius_ = 1.0;
  dynamic_ = true;

  // The following line saves the json object in the details_ member variable
  // from the EntityBase class, in order to return it later in GetDetails()
  details_ = details;
}

void Package::SetWeight(float weight) { weight_ = weight; }
float Package::GetWeight() { return weight_; }
}