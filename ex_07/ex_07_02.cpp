#include "ex_07_02_car.h"

int main() {
    Car car1("WO-HS 1234", 42.0, 6.0);
    car1.show();
    car1.refuel(42.0);
    car1.drive(200.0);
    car1.show();

   return 0;
}

