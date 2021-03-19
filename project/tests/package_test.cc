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
      pack = new Package();
    }

  protected:
    Package *pack;
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/
/** Test the Package default constructor to see if it is created with the correct values */
TEST_F(PackageTest, PackageCreated) 
{
  ASSERT_NE(nullptr, pack);
  ASSERT_EQ("name", pack->GetName());
  for(auto i = pack->GetPosition().begin(); i != pack->GetPosition().end(); i++)
  {
      ASSERT_FLOAT_EQ(0.0, *i);
  }
  for(auto i = pack->GetDirection().begin(); i != pack->GetDirection().end(); i++)
  {
      ASSERT_FLOAT_EQ(0.0, *i);
  }
  ASSERT_EQ(0, pack->GetId());
  ASSERT_FLOAT_EQ(1.0, pack->GetRadius());
  ASSERT_EQ(0, pack->GetVersion());
  ASSERT_EQ(true, pack->IsDynamic());
  ASSERT_EQ(0.0, pack->GetWeight());
}
/** Test getter and setter for weight_ */
TEST_F(PackageTest, WeightTest) 
{
  pack->SetWeight(3.44);
  ASSERT_FLOAT_EQ(3.44, pack->GetWeight());
}
/** Test getter and setter for name_ */
TEST_F(PackageTest, NameTest) 
{
  pack->SetName("new name");
  ASSERT_EQ("new name", pack->GetName());
}
/** Test getter and setter for position_ */
TEST_F(PackageTest, PositionTest) 
{
  std::vector<float> newPos;
  newPos.push_back(4.3);
  newPos.push_back(4.3);
  newPos.push_back(4.3);
  pack->SetPosition(newPos);
  for(auto i = pack->GetPosition().begin(); i != pack->GetPosition().end(); i++)
  {
      ASSERT_FLOAT_EQ(4.3, *i);
  }
}
/** Test getter and setter for direction */
TEST_F(PackageTest, DirectionTest)
{
    std::vector<float> newDir;
    newDir.push_back(1.3);
    newDir.push_back(1.3);
    newDir.push_back(1.3);
    pack->SetDirection(newDir);
    for(auto i = pack->GetDirection().begin(); i != pack->GetDirection().end(); i++)
    {
        ASSERT_FLOAT_EQ(1.3, *i);
    }
}
/** Test getter and setter for id_ */
TEST_F(PackageTest, IdTest) 
{
    pack->SetId(1);
    ASSERT_EQ(1, pack->GetId());
}
/** Test getter and setter for radius */
TEST_F(PackageTest, RadiusTest) 
{
    pack->SetRadius(5.5);
    ASSERT_FLOAT_EQ(5.5, pack->GetRadius());
}
/* Test getter and setter for version_ */
TEST_F(PackageTest, VersionTest) 
{
    pack->SetVersion(1);
    ASSERT_EQ(1, pack->GetVersion());
}
/** Test getter and setter for dynamic_ */
TEST_F(PackageTest, IsDynamicTest) 
{
    pack->SetDynamic(false);
    ASSERT_EQ(false, pack->IsDynamic());
}

} // namespace csci3081