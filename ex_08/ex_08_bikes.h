#pragma once

#include <string>

class Bicycle {
protected:
    double kilometreReading;
public:
   Bicycle();
   void ride(double km);
   void show();
};

class Ebike : public Bicycle {
protected:
   double loaded;
public:
   Ebike();
   void load(double kwh);
   void show();
};


class Pedelec : public Ebike {
   std::string licensePlate;
public:
   Pedelec(std::string l);
   void show();
};
