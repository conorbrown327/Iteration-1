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

TEST_F(DroneTest, DefaultDroneConstructed) 
{
    ASSERT_NE(nullptr, d);
}

TEST_F(DroneTest, GetNameTest) 
{
    ASSERT_EQ("name", d->GetName());
}

TEST_F(DroneTest, GetPositionTest) 
{
    for(auto i = d->GetPosition().begin(); i != d->GetPosition().end(); i++)
    {
        ASSERT_FLOAT_EQ(0.0, *i);
    }
}

TEST_F(DroneTest, GetDirectionTest)
{
    for(auto i = d->GetDirection().begin(); i != d->GetDirection().end(); i++)
    {
        ASSERT_FLOAT_EQ(0.0, *i);
    }
}

TEST_F(DroneTest, GetIdTest) 
{
    ASSERT_EQ(0, d->GetId());
}

TEST_F(DroneTest, GetRadiusTest) 
{
    ASSERT_EQ(1, d->GetRadius());
}

TEST_F(DroneTest, GetVersionTest) 
{
    ASSERT_EQ(0, d->GetVersion());
}

TEST_F(DroneTest, IsDynamicTest) 
{
    ASSERT_EQ(true, d->IsDynamic());
}

} // namespcae csci3081