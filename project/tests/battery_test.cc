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

/** Test that the default constuctor works and assigns the correct values */
TEST_F(BatteryTest, BatteryCreated) 
{
  ASSERT_NE(nullptr, b);
  ASSERT_FLOAT_EQ(100.0, b->GetCharge());
  ASSERT_FLOAT_EQ(100.0, b->GetMaxCharge());
  ASSERT_EQ(false, b->IsEmpty());
}

/** Test GetCharge and SetChare **/
TEST_F(BatteryTest, ChargeTest) 
{
  b->SetCharge(50.7);
  ASSERT_FLOAT_EQ(50.7, b->GetCharge());
}

/** Test GetMaxCharge and SetMaxChare **/
TEST_F(BatteryTest, MaxChargeTest) 
{
  b->SetMaxCharge(30.9);
  ASSERT_FLOAT_EQ(30.9, b->GetMaxCharge());
}

/** 
  * Check to see if when the battery is empty and out of charge
  * that isEmpty will change empty_ to true 
  */
TEST_F(BatteryTest, EmptyTest) 
{
  b->SetCharge(0.0);
  ASSERT_EQ(true, b->IsEmpty());
}

} // namespcae csci3081