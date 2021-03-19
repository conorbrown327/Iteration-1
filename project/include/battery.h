/**
 *@file battery.h
 */
#ifndef CUSTOMER_H
#define CUSTOMER_H

namespace csci3081 
{

/*******************************************************************************
 * Class Definitions
 ******************************************************************************/
/**
 * @brief This class defines Battery.
 *
 * This class defines the Battery object to be used in the Drone class.
 * The Battery will keep track of its charge while a drone is delivering.
 */
class Battery{
    public:
        Battery();
        Battery(float maxCharge, float remainingCharge, bool empty);

        /**
         * Function to check to see if the battery is empty.
         */ 
        bool IsEmpty();
        /**
         * Decrease the battery charge while the drone is active.
         */
        void DecreaseCharge();
        /**
         * Charge the battery if the battery is empty.
         */
        void ChargeBattery();

        void SetCharge(float charge);
        float GetCharge();
        void SetMaxCharge(float maxCharge);
        float GetMaxCharge();
        void SetEmpty(bool empty);
        bool GetEmpty();

    private:
        float maxCharge;
        float remainingCharge;
        bool empty;
};

}  // namespace csci3081

#endif  // CUSTOMER_H