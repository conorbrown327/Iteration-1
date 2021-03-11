namespace csci3081 {

class Battery{
    public:
        Battery();
        Battery(float maxCharge, float remainingCharge, bool empty);

        // check to see if the battery is empty
        bool IsEmpty();
        // decrease the battery's charge when in use
        void DecreaseCharge();
        // charge the battery if needed after used
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

}