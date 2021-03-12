#include "gtest/gtest.h"
#include <EntityProject/project_settings.h>
#include "../include/delivery_simulation.h"
#include <EntityProject/entity.h>
#include "json_helper.h"
#include <iostream>
#include <vector>
#include "../include/drone.h"

namespace csci3081 
{

using entity_project::IEntity;

class ConstructorDroneTest : public ::testing::Test 
{ 
  public:
    virtual void SetUp() 
    {
        const picojson::object& details = new JsonHelper::CreateJsonObject();

        d = new Drone();
    }

  protected:
    Drone *d;
};

/*******************************************************************************
 * Test Cases
 ******************************************************************************/

TEST_F(ConstuctorDroneTest, DroneCreated) {
    
}

} // namespcae csci3081