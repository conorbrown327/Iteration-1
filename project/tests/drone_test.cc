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
        d = new Drone();
    }

  protected:
    Drone *d;
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(DroneTest, DefaultDroneConstructed) {
    for(auto i = d->GetPosition().begin(); i != d->GetPosition().end(); i++)
    {
        ASSERT_FLOAT_EQ(0.0, *i);
    }
    for(auto i = d->GetDirection().begin(); i != d->GetDirection().end(); i++)
    {
        ASSERT_FLOAT_EQ(0.0, *i);
    }
}

TEST_F(DroneTest, GetPositionTest) {
    
}

} // namespcae csci3081