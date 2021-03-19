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

/** Test that the default constructor works and assigns the correct values */
TEST_F(Vector3dTest, Vector3dContructorTest) 
{
  ASSERT_NE(nullptr, v);
  ASSERT_FLOAT_EQ(0.0, v->GetX());
  ASSERT_FLOAT_EQ(0.0, v->GetY());
  ASSERT_FLOAT_EQ(0.0, v->GetZ());
}
/** Test the getters and setters for x_ */
TEST_F(Vector3dTest, GetXTest) 
{
  v->SetX(3.3);
  ASSERT_FLOAT_EQ(3.3, v->GetX());
}
/** Test the getters and setters for y_ */
TEST_F(Vector3dTest, GetYTest) 
{
  v->SetY(3.3);
  ASSERT_FLOAT_EQ(3.3, v->GetY());
}
/** Test the getters and setters for z_ */
TEST_F(Vector3dTest, GetZTest) 
{
  v->SetZ(3.3);
  ASSERT_FLOAT_EQ(3.3, v->GetZ());
}
/** Test that the Normalize function works */
TEST_F(Vector3dTest, NormalizeTest) 
{
  Vector3d* norm = v->Normalize();
  ASSERT_NE(nullptr, norm);
  ASSERT_FLOAT_EQ(1.0, norm->GetX());
  ASSERT_FLOAT_EQ(1.0, norm->GetY());
  ASSERT_FLOAT_EQ(1.0, norm->GetZ());
}
/** Test that the Magnitude test works */
TEST_F(Vector3dTest, MagnitudeTest)
{
  float magn = v->Magnitude();
  ASSERT_FLOAT_EQ(0.0, magn);
}
} // namespcae csci3081 
