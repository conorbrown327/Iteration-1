/**
 *@file entity_base.h
 */
#ifndef ENTITY_BASE_H_
#define ENTITY_BASE_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <EntityProject/facade/delivery_system.h>
#include <vector>
#include <string>

namespace csci3081 {

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief The base class for creating entities.
 *
 * This class can be used as the base for all entities in the delivery system.
 * The overall design is up to you (the student), but all entities must implement
 * the IEntity interface.
 *
 * See the documentation for IEntity for more information
 */
class EntityBase : public IEntity {
  public:
    virtual ~EntityBase() {}

    const std::string& GetName();
    void SetName(std::string name);

    int GetId() const;
    void SetId(int id);

    float GetRadius() const;
    void SetRadius(float radius);

    const std::vector<float>& GetDirection() const;
    const void SetDirection(std::vector<float> direction);

    const std::vector<float>& GetPosition() const;
    const void SetPosition(std::vector<float> position);

    int GetVersion() const;
    void SetVersion(int version);

    bool IsDynamic() const;
    void SetDynamic(bool dynamic);

    const picojson::object& GetDetails();

  protected:
    std::string name_;
    int id_;
    float radius_;
    std::vector<float> direction_;
    std::vector<float> position_;
    int version_;
    bool dynamic_;
    picojson::object details_;
};

}  // namespace csci3081


#endif  // ENTITY_BASE_H_
