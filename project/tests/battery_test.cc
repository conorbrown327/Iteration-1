#include "gtest/gtest.h"
#include "battery.h"
#include <iostream>

namespace csci3081 
{

class DefaultBatteryTest : public ::testing::Test 
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

TEST_F(DefaultBatteryTest, BatteryCreated) {
  ASSERT_EQ(100.0, b->GetMaxCharge());
  ASSERT_EQ(100.0, b->GetCharge());
  ASSERT_EQ(false, b->GetEmpty());
}

} // namespcae csci3081