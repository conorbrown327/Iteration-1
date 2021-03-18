#include "entity_base.h"

namespace csci3081 
{

    const std::string& EntityBase::GetName() { return name_; }
    void EntityBase::SetName(std::string name) { name_ = name; }

    int EntityBase::GetId() const { return id_; }
    void EntityBase::SetId(int id) { id_ = id; }

    float EntityBase::GetRadius() const { return radius_; }
    void EntityBase::SetRadius(float radius) { radius_ = radius; }

    const std::vector<float>& EntityBase::GetDirection() const { return direction_; }
    const void EntityBase::SetDirection(std::vector<float> direction) { direction_ = direction; }

    const std::vector<float>& EntityBase::GetPosition() const { return position_; }
    const void EntityBase::SetPosition(std::vector<float> position) { position_ = position; }

    int EntityBase::GetVersion() const { return version_; }
    void EntityBase::SetVersion(int version) { version_ = version; }

    bool EntityBase::IsDynamic() const { return dynamic_; }
    void EntityBase::SetDynamic(bool dynamic) { dynamic_ = dynamic; }

    const picojson::object& EntityBase::GetDetails() { return details_; }

}  // namespace csci3081
