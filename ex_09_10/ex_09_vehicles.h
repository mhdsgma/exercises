#pragma once

#include <string>
#include <ostream>

class Vehicle {
    double kilometreReading;
protected:
    virtual std::string name() const = 0;
    virtual std::string details() const = 0;
public:
    Vehicle();
    virtual ~Vehicle() = default;
    void ride(double km);
    friend std::ostream &operator<<(std::ostream &os, const Vehicle &vehicle);
};

class Bicycle : public Vehicle {
protected:
    std::string name() const override { return "Bicycle"; }
    std::string details() const override { return ""; }
public:
    Bicycle();
};

class Ebike : public Bicycle {
    double loaded;
protected:
    std::string name() const override { return "Ebike"; }
    std::string details() const override { return Bicycle::details() + "\n " + std::to_string(loaded) + " kWh"; }
public:
    Ebike();
    void load(double kwh);
};


class Pedelec : public Ebike {
    std::string licensePlate;
    std::string name() const override { return "Pedelec"; }
    std::string details() const override { return Ebike::details() + "\n License Plate: " + licensePlate; }
public:
    explicit Pedelec(const std::string &l);
};
