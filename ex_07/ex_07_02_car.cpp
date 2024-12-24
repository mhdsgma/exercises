#include <iostream>
#include "ex_07_02_car.h"

Car::Car(std::string licensePlate, double capacity, double fuelConsumption) {
    licensePlate_= licensePlate;
    kilometreReading_= 0.0;
    capacity_ = capacity;
    fuelConsumption_ = fuelConsumption;
    fuel_ = 0.0;
}

void Car::drive(double km){
    kilometreReading_ += km;
    fuel_-= (km * fuelConsumption_ / 100);
}

void Car::refuel(double l){
    fuel_ += l;
}

void Car::show() {
    std::cout << "Car " << licensePlate_
              << "\n  Reading     " << kilometreReading_ << "km"
              << "\n  Fuel        " << fuel_ << "l"
              << "\n  Capacity    " << capacity_ << "l"
              << "\n  Consumption " << fuelConsumption_ << "l/100km" << std::endl;
}

