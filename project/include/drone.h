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

    void MoveToFlyHeight(float dt);
    void MoveToPackage(float dt);
    void MoveToCustomer(float dt);
    void LowerToPackage(float dt);
    void LowerToCustomer(float dt);
    void DeliverPackage(float dt);

    Battery* GetBattery();
    void SetBattery(Battery* battery);

    float GetSpeed();
    void SetSpeed(float speed);

    const std::vector<float>& GetPackagePosition();
    void SetPackagePosition(const std::vector<float>& packagePosition);

    const std::vector<float>& GetCustomerPosition();
    void SetCustomerPosition(const std::vector<float>& customerPosition);

  private:
    Battery *battery_;
    float speed_;
    std::vector<float> packagePosition_ = {0 , 0, 0};
    std::vector<float> customerPosition_ = {0, 0, 0};
    bool atFlyHeight_, hasPackage_, packageDelivered_;
};

}  // namespace csci3081

#endif  // DRONE_H