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
      cust = new Customer();
    }

  protected:
    Customer *cust;
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/
/** Test the Customer default constructor to see if it is created with the correct values */
TEST_F(CustomerTest, CustomerCreated) 
{
  ASSERT_NE(nullptr, cust);
  ASSERT_EQ("name", cust->GetName());
  for(auto i = cust->GetPosition().begin(); i != cust->GetPosition().end(); i++)
  {
      ASSERT_FLOAT_EQ(0.0, *i);
  }
  for(auto i = cust->GetDirection().begin(); i != cust->GetDirection().end(); i++)
  {
      ASSERT_FLOAT_EQ(0.0, *i);
  }
  ASSERT_EQ(0, cust->GetId());
  ASSERT_FLOAT_EQ(1.0, cust->GetRadius());
  ASSERT_EQ(0, cust->GetVersion());
  ASSERT_EQ(true, cust->IsDynamic());
}
/** Test getter and setter for name_ */
TEST_F(CustomerTest, NameTest) 
{
  cust->SetName("new name");
  ASSERT_EQ("new name", cust->GetName());
}
/** Test getter and setter for position_ */
TEST_F(CustomerTest, PositionTest) 
{
  std::vector<float> newPos;
  newPos.push_back(4.3);
  newPos.push_back(4.3);
  newPos.push_back(4.3);
  cust->SetPosition(newPos);
  for(auto i = cust->GetPosition().begin(); i != cust->GetPosition().end(); i++)
  {
      ASSERT_FLOAT_EQ(4.3, *i);
  }
}
/** Test getter and setter for direction */
TEST_F(CustomerTest, DirectionTest)
{
    std::vector<float> newDir;
    newDir.push_back(1.3);
    newDir.push_back(1.3);
    newDir.push_back(1.3);
    cust->SetDirection(newDir);
    for(auto i = cust->GetDirection().begin(); i != cust->GetDirection().end(); i++)
    {
        ASSERT_FLOAT_EQ(1.3, *i);
    }
}
/** Test getter and setter for id_ */
TEST_F(CustomerTest, IdTest) 
{
    cust->SetId(1);
    ASSERT_EQ(1, cust->GetId());
}
/** Test getter and setter for radius */
TEST_F(CustomerTest, RadiusTest) 
{
    cust->SetRadius(5.5);
    ASSERT_FLOAT_EQ(5.5, cust->GetRadius());
}
/* Test getter and setter for version_ */
TEST_F(CustomerTest, VersionTest) 
{
    cust->SetVersion(1);
    ASSERT_EQ(1, cust->GetVersion());
}
/** Test getter and setter for dynamic_ */
TEST_F(CustomerTest, IsDynamicTest) 
{
    cust->SetDynamic(false);
    ASSERT_EQ(false, cust->IsDynamic());
}

} // namespcae csci3081 
