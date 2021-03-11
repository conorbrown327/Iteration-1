#include "gtest/gtest.h"
#include "customer.h"
#include <iostream>

namespace csci3081 
{

class DefaultCustomerTest : public ::testing::Test 
{ 
  public:
    virtual void SetUp() 
    {
      c = new Customer();
    }

  protected:
    Customer *c;
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(DefaultBatteryTest, BatteryCreated) {
  ASSERT_EQ(Vector3d(), c->GetLocation());
}

} // namespcae csci3081