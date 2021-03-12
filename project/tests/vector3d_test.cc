#include "gtest/gtest.h"
#include "vector3d.h"
#include <iostream>

namespace csci3081 
{

class Vector3dTest : public ::testing::Test 
{ 
  public:
    virtual void SetUp() 
    {
      v = new Vector3d();
    }

  protected:
    Vector3d *v;
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/


TEST_F(Vector3dTest, Vector3dContructorTest) 
{
  ASSERT_NE(nullptr, v);
}

TEST_F(Vector3dTest, GetXTest) 
{
  ASSERT_EQ(0.0, v->GetX());
}

TEST_F(Vector3dTest, GetYTest) 
{
  ASSERT_EQ(0.0, v->GetY());
}

TEST_F(Vector3dTest, GetZTest) 
{
  ASSERT_EQ(0.0, v->GetZ());
}

} // namespcae csci3081 
