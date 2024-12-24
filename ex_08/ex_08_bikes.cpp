#include "ex_08_bikes.h"
#include <iostream>

Bicycle::Bicycle() : kilometreReading{0.0} {
}

void Bicycle::ride(double km) {
  kilometreReading+=km;
}

void Bicycle::show() {
  std::cout << "Bicycle: " << kilometreReading << " km" << std::endl;
}

Ebike::Ebike() : Bicycle(), loaded{0.0} {
}

void Ebike::load(double kwh) {
  loaded+=kwh;
}

void Ebike::show() {
  std::cout << "Ebike: " << kilometreReading << " km, " << loaded << " kWh" << std::endl;
}


Pedelec::Pedelec(std::string l) : Ebike(), licensePlate{l} {
}

void Pedelec::show() {
  std::cout << "Pedelec " << licensePlate << ": " << kilometreReading << " km, " << loaded << " kWh" << std::endl;
}

