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

    void turnOn() {
        isOn = true;
    }
};

class Fridge : public Appliance {
private:
    double volume;

public:
    Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {}

    double getPowerConsumption() override {
        return powerRating * 24 * (volume / 100);
    }
};

class TV : public Appliance {
private:
    double screenSize;

public:
    TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

    double getPowerConsumption() override {
        return powerRating * (screenSize / 10);
    }
};

class House {
private:
    Appliance** appliances;
    int numAppliances;
    int currentAppliance;

public:
    House() : numAppliances(0), currentAppliance(0), appliances(nullptr) {}

    House(int numAppliances) : numAppliances(numAppliances), currentAppliance(0) {
        appliances = new Appliance*[numAppliances];
    }

    ~House() {
        delete[] appliances;
    }

    bool addAppliance(Appliance* appliance) {
        if (currentAppliance < numAppliances) {
            appliances[currentAppliance++] = appliance;
            return true;
        }
        return false;
    }

    double getTotalPowerConsumption() {
        double totalPower = 0;
        for (int i = 0; i < currentAppliance; i++) {
            totalPower += appliances[i]->getPowerConsumption();
        }
        return totalPower;
    }
};

int main() {
    Fridge fridge(200, 300);
    TV tv(150, 50);
    
    House house(2);
    house.addAppliance(&fridge);
    house.addAppliance(&tv);

    cout << "Total Power Consumption of House: " << house.getTotalPowerConsumption() << " watts" << endl;
    return 0;
}
