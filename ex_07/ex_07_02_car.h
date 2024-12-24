#ifndef EX_07_02_CAR_H
#define EX_07_02_CAR_H

#include <string>

class Car {
    std::string licensePlate_;
    double kilometreReading_;
    double capacity_;
    double fuelConsumption_;
    double fuel_;

public:
    Car(std::string licensePlate, double capacity, double fuelConsumption);
    void drive(double km);
    void refuel(double l);
    void show();
};

#endif

