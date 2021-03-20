/**
 *@file battery.cc
 */
#include "battery.h"

namespace csci3081 {
// default constructor   
Battery::Battery()
{
    maxCharge_ = 100.0;
    remainingCharge_ = 100.0;
    empty_ = false;
}
// constuctor
Battery::Battery(float maxCharge, float remainingCharge, bool empty)
{
    maxCharge_ = maxCharge;
    remainingCharge_ = remainingCharge;
    empty_ = empty;
}

bool Battery::IsEmpty()
{
    if(remainingCharge_ == 0)
        return true;
    
    return false;
} // isEmpty

void Battery::DecreaseCharge()
{
    if(!empty_)
        remainingCharge_--;
} // decreaseCharge

void Battery::ChargeBattery()
{
    remainingCharge_ = 100;
    empty_ = false;
} // chargeBattery

void Battery::SetCharge(float charge) {remainingCharge_ = charge;}
float Battery::GetCharge(){return remainingCharge_;}
void Battery::SetMaxCharge(float maxCharge) {maxCharge_ = maxCharge;}
float Battery::GetMaxCharge() {return maxCharge_;}
void Battery::SetEmpty(bool empty) {empty_ = empty;}
bool Battery::GetEmpty() {return empty_;}

} // namespace csci3081