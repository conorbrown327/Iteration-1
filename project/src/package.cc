#include "package.h"

namespace csci3081 {

Package::Package()
{
    name_ = "name";
    position_.push_back(0.0);
    position_.push_back(0.0);
    position_.push_back(0.0);
    weight_ = 0.0;
}

void Package::SetWeight(float weight) {weight_ = weight;}
float Package::GetWeight() {return weight_;}
}