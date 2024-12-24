#include "ex_09_vehicles.h"
#include <iostream>

Vehicle::Vehicle() : kilometreReading{0.0} {
}

void Vehicle::ride(double km) {
    kilometreReading+=km;
}

std::ostream &operator<<(std::ostream &os, const Vehicle &vehicle) {
    os << vehicle.name() << "\n " << vehicle.kilometreReading << " km" << vehicle.details();
    return os;
}

Bicycle::Bicycle() : Vehicle() {
}

Ebike::Ebike() : Bicycle(), loaded{0.0} {
}

void Ebike::load(double kwh) {
  loaded+=kwh;
}

Pedelec::Pedelec(const std::string &l) : Ebike(), licensePlate{l} {
}


