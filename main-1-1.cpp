#include <iostream>
using namespace std;

class Appliance {
protected:
    int powerRating;
    bool isOn;
    
public:
    Appliance() : powerRating(0), isOn(false) {}

    Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

    void turnOn() {
        isOn = true;
    }

    void turnOff() {
        isOn = false;
    }

    virtual double getPowerConsumption() {
        return 0;
    }
};

int main() {
    Appliance appliance(100);
    appliance.turnOn();
    cout << "Appliance Power Consumption: " << appliance.getPowerConsumption() << " watts" << endl;
    return 0;
}
