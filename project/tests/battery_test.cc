#include "gtest/gtest.h"
#include "battery.h"
#include <iostream>

namespace csci3081 
{

class BatteryTest : public ::testing::Test 
{ 
  public:
    virtual void SetUp() 
    {
      b = new Battery();
    }

  protected:
    Battery *b;
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(BatteryTest, BatteryCreated) 
{
  ASSERT_NE(nullptr, b);
}

TEST_F(BatteryTest, GetChargeTest) 
{
  ASSERT_EQ(100.0, b->GetCharge());
}

TEST_F(BatteryTest, GetMaxChargeTest) 
{
  ASSERT_EQ(100.0, b->GetMaxCharge());
}

TEST_F(BatteryTest, GetEmptyTest) 
{
  ASSERT_EQ(false, b->GetEmpty());
}

TEST_F(BatteryTest, IsEmptyTest) 
{
  ASSERT_EQ(false, b->IsEmpty());
}

} // namespcae csci3081