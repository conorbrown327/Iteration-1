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
  public:
    // Default drone constructor to be used for testing
    Drone();
    Drone(std::vector<float> pos, std::vector<float> direction, const picojson::object& obj);

    Battery* GetBattery();
    void SetBattery(Battery* battery);

    float GetSpeed();
    void SetSpeed(float speed);

    /** Beeline to the Package and pick it up*/
    void PickUpPackage(float dt);
    /** Beeline from the package after picked up to the customer */
    void DeliverToCustomer(float dt);

  private:
    Battery *battery_;
    float speed_;
    std::vector<float> packPos;
    std::vector<float> custPos;
};

}  // namespace csci3081

#endif  // DRONE_H