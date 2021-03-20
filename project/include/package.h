/**
 *@file package.h
 */
#ifndef PACKAGE_H
#define PACKAGE_H

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include "entity_base.h"
#include <vector>
#include <string>

namespace csci3081 {
/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief This class defines Package.
 *
 * Package inherits from EntityBase. It's only unique attribute is weight.
 */
class Package : public csci3081::EntityBase{
  public:
    Package();
    Package(std::vector<float> pos, std::vector<float> direction, const picojson::object& obj);
    
    void SetWeight(float weight);
    float GetWeight();

  private:
    float weight_;
};

}  // namespace csci3081

#endif  // PACKAGE_H