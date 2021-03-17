/**
 *@file drone.h
 */
#ifndef DRONE_H
#define DRONE_H

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "entity_base.h"
#include "battery.h"
#include <vector>
#include <string>

namespace csci3081 {

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief This class defines Drone.
 *
 * This class defines the Drone object that inherits from EntityBase.
 * An instance of Drone will have all EntityBase definitions as well as a 
 * Battery to keep track of the drone's battery charge.
 */
class Drone : public csci3081::EntityBase {
  // TODO: Add documentation to these functions
 public:
  Drone();
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
   std::vector<float> direction;
   Battery *battery_ = new Battery();
};

}  // namespace csci3081

#endif  // DRONE_H