#include <iostream>
using namespace std;

class Appliance {
protected:
    int powerRating;
    bool isOn;

public:
    Appliance() : powerRating(0), isOn(false) {}

    Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

    virtual double getPowerConsumption() {
        return 0;
    }
};

class TV : public Appliance {
private:
    double screenSize;

public:
    TV() : Appliance(), screenSize(0) {}

    TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

    double getPowerConsumption() override {
        return powerRating * (screenSize / 10);
    }
};

int main() {
    TV tv(150, 50);
    tv.turnOn();
    cout << "TV Power Consumption: " << tv.getPowerConsumption() << " watts" << endl;
    return 0;
}
