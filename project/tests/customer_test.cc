#include "gtest/gtest.h"
#include "customer.h"
#include <iostream>

namespace csci3081 
{

class CustomerTest : public ::testing::Test 
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


TEST_F(CustomerTest, CustomerContructorTest) 
{
  ASSERT_NE(nullptr, c);
}
TEST_F(CustomerTest, GetPositionTest) 
{
  ASSERT_NE(nullptr, c->GetPosition());
}

TEST_F(CustomerTest, GetNameTest) 
{
    ASSERT_EQ("name", c->GetName());
}

TEST_F(CustomerTest, GetIdTest) 
{
    ASSERT_EQ(0, c->GetId());
}

TEST_F(CustomerTest, GetRadiusTest) 
{
    ASSERT_EQ(1, c->GetRadius());
}

TEST_F(CustomerTest, GetVersionTest) 
{
    ASSERT_EQ(0, c->GetVersion());
}

TEST_F(CustomerTest, IsDynamicTest) 
{
    ASSERT_EQ(true, c->IsDynamic());
}

} // namespcae csci3081 
