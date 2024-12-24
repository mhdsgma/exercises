#include "ex_08_bikes.h"

int main() {
  Bicycle b;
  b.show();
  b.ride(24);
  b.show();

  Ebike e;
  e.show();
  e.load(12.1);
  e.ride(34.8);
  e.show();

  Pedelec p("ABC 247");
  p.show();
  p.load(17.2);
  p.ride(78.1);
  p.show();

}

