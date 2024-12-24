#include <iostream>
#include <string>

class Car {
    std::string licensePlate_;
    double kilometreReading_;
    double capacity_;
    double fuelConsumption_;
    double fuel_;

public:
    Car(std::string licensePlate, double capacity, double fuelConsumption) {
        licensePlate_= licensePlate;
        kilometreReading_= 0.0;
        capacity_ = capacity;
        fuelConsumption_ = fuelConsumption;
        fuel_ = 0.0;
    }

    void drive(double km){
        kilometreReading_ += km;
        fuel_-= (km * fuelConsumption_ / 100);
    }

    void refuel(double l){
        fuel_ += l;
    }

    void show() {
        std::cout << "Car " << licensePlate_
                  << "\n  Reading     " << kilometreReading_ << "km"
                  << "\n  Fuel        " << fuel_ << "l"
                  << "\n  Capacity    " << capacity_ << "l"
                  << "\n  Consumption " << fuelConsumption_ << "l/100km" << std::endl;
    }
};

int main() {
    Car car1("WO-HS 1234", 42.0, 6.0);
    car1.show();
    car1.refuel(42.0);
    car1.drive(200.0);
    car1.show();

   return 0;
}

