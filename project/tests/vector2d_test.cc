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


TEST_F(Vector2dTest, Vector2dContructorTest) 
{
  ASSERT_NE(nullptr, v);
}

TEST_F(Vector2dTest, GetXTest) 
{
  ASSERT_EQ(0.0, v->GetX());
}

TEST_F(Vector2dTest, GetYTest) 
{
  ASSERT_EQ(0.0, v->GetY());
}

} // namespcae csci3081 
