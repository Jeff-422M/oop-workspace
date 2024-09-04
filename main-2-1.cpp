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

class Fridge : public Appliance {
private:
    double volume;

public:
    Fridge() : Appliance(), volume(0) {}

    Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {}

    double getPowerConsumption() override {
        return powerRating * 24 * (volume / 100);
    }
};

int main() {
    Fridge fridge(200, 300);
    fridge.turnOn();
    cout << "Fridge Power Consumption: " << fridge.getPowerConsumption() << " watts" << endl;
    return 0;
}
