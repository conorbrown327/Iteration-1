#include "drone.h"

namespace csci3081 {

Drone::Drone()
{
  name_ = "drone";
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
  name_ = "drone";
  position_ = position;
  direction_ = direction;
  battery_ = new Battery();
  radius_ = 1.0;
  dynamic_ = true;
  atFlyHeight_ = false;
  hasPackage_ = false;
  packageDelivered_ = false;

  // The following line saves the json object in the details_ member variable
  // from the EntityBase class, in order to return it later in GetDetails()
  details_ = details;
}

void Drone::DeliverPackage(float dt)
{
  if(!atFlyHeight_)
    MoveToFlyHeight(dt);
}

void Drone::MoveToFlyHeight(float dt)
{
  //std::string name = name_;
  std::vector<float> p;
  p.push_back(0);
  p.push_back(0);
  p.push_back(0);
  position_ = p;
  std::cout << position_.at(1) << std::endl;
  float y = position_.at(1);
  if(y < 500)
    position_.at(1) = y + speed_ * dt;
  else 
    atFlyHeight_ = true;
}

void Drone::MoveToPackage(float dt)
{
  float packageX = packagePosition_.at(0);
  float packageZ = packagePosition_.at(2);
  float droneX = position_.at(0);
  float droneZ = position_.at(2);

  if(!atFlyHeight_)
    MoveToFlyHeight(dt);
  else
  {
    bool atPackX = false;
    if(packageX+5 > droneX)
    {
      position_.at(0) = droneX + speed_ * dt;
    }
    else if(packageX-5 < droneX)
    {
      position_.at(0) = droneX - speed_ * dt;
    }
    else
      atPackX = true;

    if(packageZ+5 > droneZ)
    {
      position_.at(2) = droneZ + speed_ * dt;
    }
    else if(packageZ-5 < droneZ)
    {
      position_.at(2) = droneZ - speed_ * dt;
    }
    else if(atPackX == true)
      LowerToPackage(dt);
  }
}

void Drone::LowerToPackage(float dt)
{
  float droneY = position_.at(1);
  float packageY = packagePosition_.at(1);
  if(droneY < packageY)
  {
    atFlyHeight_ = false;
    hasPackage_ = true;
  }
  else
    position_.at(1) = droneY - speed_ * dt;
}

void Drone::LowerToCustomer(float dt)
{
  float droneY = position_.at(1);
  float customerY = packagePosition_.at(1);
  if(droneY < customerY)
  {
    packageDelivered_ = true;
  }
  else
    position_.at(1) = droneY - speed_ * dt;
}

void Drone::MoveToCustomer(float dt)
{
  float customerX = customerPosition_.at(0);
  float customerZ = customerPosition_.at(2);
  float droneX = position_.at(0);
  float droneZ = position_.at(2);

  if(!atFlyHeight_)
    MoveToFlyHeight(dt);
  else
  {
    bool atCustX = false;
    if(customerX+5 > droneX)
    {
      position_.at(0) = droneX + speed_ * dt;
    }
    else if(customerX-5 < droneX)
    {
      position_.at(0) = droneX - speed_ * dt;
    }
    else
      atCustX = true;

    if(customerZ+5 > droneZ)
    {
      position_.at(2) = droneZ + speed_ * dt;
    }
    else if(customerZ-5 < droneZ)
    {
      position_.at(2) = droneZ - speed_ * dt;
    }
    else if(atCustX == true)
      LowerToCustomer(dt);
  }
}
Battery* Drone::GetBattery() { return battery_; }
void Drone::SetBattery(Battery* battery) { battery_ = battery; }

float Drone::GetSpeed() { return speed_; }
void Drone::SetSpeed(float speed) { speed_ = speed; }

const std::vector<float>& Drone::GetPackagePosition() { return packagePosition_; }
void Drone::SetPackagePosition(const std::vector<float>& packagePosition) 
{
  packagePosition_ = packagePosition;
}

const std::vector<float>& Drone::GetCustomerPosition() { return customerPosition_; }
void Drone::SetCustomerPosition(const std::vector<float>& customerPosition)
{
  customerPosition_ = customerPosition_;
}
}  // namespace csci3081