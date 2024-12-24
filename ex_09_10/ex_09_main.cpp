#include "ex_09_vehicles.h"
#include <iostream>

int main() {
  Bicycle b;
  b.ride(24);

  Ebike e;
  e.load(12.1);
  e.ride(34.8);

  Pedelec p("ABC 247");
  p.load(17.2);
  p.ride(78.1);

  std::cout << b << "\n" << e << "\n" << p << std::endl;
}

