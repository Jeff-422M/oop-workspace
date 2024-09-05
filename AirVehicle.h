#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle {
private:
    int weight;
    float fuel;
    int numberOfFlights;

public:
    AirVehicle();
    AirVehicle(int w);

    int get_weight() const;
    float get_fuel() const;
    int get_numberOfFlights() const;

    void set_weight(int w);
    void set_fuel(float f);
    void set_numberOfFlights(int nf);

    void refuel();
    
    virtual void fly(int headwind, int minutes);

    virtual ~AirVehicle() {};
};

#endif
