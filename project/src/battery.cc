#include "battery.h"

namespace csci3081 {
// default constructor   
Battery::Battery()
{
    maxCharge = 100.0;
    remainingCharge = 100.0;
    empty = false;
}
// constuctor
Battery::Battery(float maxCharge, float remainingCharge, bool empty)
{
    this->maxCharge = maxCharge;
    this->remainingCharge = remainingCharge;
    this->empty = empty;
}

bool Battery::IsEmpty()
{
    if(remainingCharge == 0)
        return true;
    
    return false;
} // isEmpty

void Battery::DecreaseCharge()
{
    if(!empty)
        this->remainingCharge--;
} // decreaseCharge

void Battery::ChargeBattery()
{
    remainingCharge = 100;
    empty = false;
} // chargeBattery

void Battery::SetCharge(float charge) {this->remainingCharge = charge;}
float Battery::GetCharge(){return remainingCharge;}
void Battery::SetMaxCharge(float maxCharge) {this->maxCharge = maxCharge;}
float Battery::GetMaxCharge() {return maxCharge;}
void Battery::SetEmpty(bool empty) {this->empty = empty;}
bool Battery::GetEmpty() {return empty;}

} // namespace csci3081