#include "gtest/gtest.h"
#include <iostream>
#include <vector>
#include "drone.h"

namespace csci3081 
{

class DroneTest : public ::testing::Test 
{ 
  public:
    virtual void SetUp() 
    {
        dro = new Drone();
    }

  protected:
    Drone *dro;
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/
/** Test the Drone default constructor to see if it is created with the correct values */
TEST_F(DroneTest, DefaultDroneConstructed) 
{
    ASSERT_NE(nullptr, dro);
    ASSERT_EQ("name", dro->GetName());
    for(auto i = dro->GetPosition().begin(); i != dro->GetPosition().end(); i++)
    {
        ASSERT_FLOAT_EQ(0.0, *i);
    }
    for(auto i = dro->GetDirection().begin(); i != dro->GetDirection().end(); i++)
    {
        ASSERT_FLOAT_EQ(0.0, *i);
    }
    ASSERT_EQ(0, dro->GetId());
    ASSERT_FLOAT_EQ(1.0, dro->GetRadius());
    ASSERT_EQ(0, dro->GetVersion());
    ASSERT_EQ(true, dro->IsDynamic());
    ASSERT_NE(nullptr, dro->GetBattery());
}
/** Test getter and setter for battery_ */
TEST_F(DroneTest, BatteryTest)
{
    Battery* batt = new Battery();
    dro->SetBattery(batt);
    ASSERT_NE(nullptr, dro->GetBattery());
}
/** Test getter and setter for name_ */
TEST_F(DroneTest, NameTest) 
{
    dro->SetName("new name");
    ASSERT_EQ("new name", dro->GetName());
}
/** Test getter and setter for position_ */
TEST_F(DroneTest, PositionTest) 
{
    std::vector<float> newPos;
    newPos.push_back(4.3);
    newPos.push_back(4.3);
    newPos.push_back(4.3);
    dro->SetPosition(newPos);
    for(auto i = dro->GetPosition().begin(); i != dro->GetPosition().end(); i++)
    {
        ASSERT_FLOAT_EQ(4.3, *i);
    }
}
/** Test getter and setter for direction */
TEST_F(DroneTest, DirectionTest)
{
    std::vector<float> newDir;
    newDir.push_back(1.3);
    newDir.push_back(1.3);
    newDir.push_back(1.3);
    dro->SetDirection(newDir);
    for(auto i = dro->GetDirection().begin(); i != dro->GetDirection().end(); i++)
    {
        ASSERT_FLOAT_EQ(1.3, *i);
    }
}
/** Test getter and setter for id_ */
TEST_F(DroneTest, IdTest) 
{
    dro->SetId(1);
    ASSERT_EQ(1, dro->GetId());
}
/** Test getter and setter for radius */
TEST_F(DroneTest, RadiusTest) 
{
    dro->SetRadius(5.5);
    ASSERT_FLOAT_EQ(5.5, dro->GetRadius());
}
/* Test getter and setter for version_ */
TEST_F(DroneTest, VersionTest) 
{
    dro->SetVersion(1);
    ASSERT_EQ(1, dro->GetVersion());
}
/** Test getter and setter for dynamic_ */
TEST_F(DroneTest, IsDynamicTest) 
{
    dro->SetDynamic(false);
    ASSERT_EQ(false, dro->IsDynamic());
}

} // namespcae csci3081