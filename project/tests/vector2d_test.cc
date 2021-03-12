#include "gtest/gtest.h"
#include "vector2d.h"
#include <iostream>

namespace csci3081 
{

class Vector2dTest : public ::testing::Test 
{ 
  public:
    virtual void SetUp() 
    {
      v = new Vector2d();
    }

  protected:
    Vector2d *v;
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/


TEST_F(Vector2dTest, Vector3dContructorTest) 
{
  ASSERT_NE(nullptr, v);
}

TEST_F(Vector2dTest, GetVecTest) 
{
  ASSERT_NE(nullptr, v->GetVec());
}


} // namespcae csci3081 
