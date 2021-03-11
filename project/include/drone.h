#include "entity_base.h"
#include "battery.h"
#include <vector>
#include <string>

namespace csci3081 {

class Drone : public csci3081::EntityBase {
  // TODO: Add documentation to these functions
 public:
  Drone(std::vector<float> pos, std::vector<float> direction, const picojson::object& obj);

  int GetId() const;

  const std::string& GetName();

  const std::vector<float>& GetPosition() const;

  const std::vector<float>& GetDirection() const;

  float GetRadius() const;

  int GetVersion() const;

  bool IsDynamic() const;

  

  private:
   std::string name;
   std::vector<float> position;
   std::vector<float> orientation;
   Battery *battery_ = new Battery();
};

}