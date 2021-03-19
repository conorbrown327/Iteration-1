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

/** Test that the default constuctor works and assigns the correct values */
TEST_F(Vector2dTest, Vector2dContructorTest) 
{
  ASSERT_NE(nullptr, v);
  ASSERT_FLOAT_EQ(0.0, v->GetX());
  ASSERT_FLOAT_EQ(0.0, v->GetY());
}
/** Test that getters and setters for x_ work */
TEST_F(Vector2dTest, GetXTest) 
{
  v->SetX(2.2);
  ASSERT_FLOAT_EQ(2.2, v->GetX());
}
/** Test that getters and setters for y_ work */
TEST_F(Vector2dTest, GetYTest) 
{
  v->SetY(2.2);
  ASSERT_FLOAT_EQ(2.2, v->GetY());
}
/** Test that the Normalize function works */
TEST_F(Vector2dTest, NormalizeTest) 
{
  Vector2d* norm = v->Normalize();
  ASSERT_NE(nullptr, norm);
  ASSERT_FLOAT_EQ(1.0, norm->GetX());
  ASSERT_FLOAT_EQ(1.0, norm->GetY());
}
/** Test that the Magnitude test works */
TEST_F(Vector2dTest, MagnitudeTest)
{
  float magn = v->Magnitude();
  ASSERT_FLOAT_EQ(0.0, magn);
}
} // namespcae csci3081 
