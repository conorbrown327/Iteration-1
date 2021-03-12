#include "gtest/gtest.h"
#include "package.h"
#include <iostream>

namespace csci3081 
{

class PackageTest : public ::testing::Test 
{ 
  public:
    virtual void SetUp() 
    {
      p = new Package();
    }

  protected:
    Package *p;
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(PackageTest, PackageCreated) 
{
  ASSERT_NE(nullptr, p);
}

/*TEST_F(PackageTest, GetCustomerTest) 
{
  ASSERT_NE(nullptr, p->GetCustomer());
}
*/

TEST_F(PackageTest, GetNameTest) 
{
    ASSERT_EQ("name", p->GetName());
}

TEST_F(PackageTest, GetPositionTest) 
{
  ASSERT_NE(nullptr, p->GetPosition());
}

TEST_F(PackageTest, GetWeightTest) 
{
  ASSERT_EQ(0.0, p->GetWeight());
}

TEST_F(PackageTest, GetIdTest) 
{
    ASSERT_EQ(0, p->GetId());
}

TEST_F(PackageTest, GetRadiusTest) 
{
    ASSERT_EQ(1, p->GetRadius());
}

TEST_F(PackageTest, GetVersionTest) 
{
    ASSERT_EQ(0, p->GetVersion());
}

TEST_F(PackageTest, IsDynamicTest) 
{
    ASSERT_EQ(true, p->IsDynamic());
}

} // namespace csci3081