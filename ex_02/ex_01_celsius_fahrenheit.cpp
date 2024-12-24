#include <iostream>
#include "ex_01_celsius_fahrenheit_functions.h"

int main() {
    double fahrenheit;
    std::cout << "Enter fahrenheit value:" << std::endl;
    std::cin >> fahrenheit;
    std::cout << "the degree from fahrenheit to celsius is: " << CelsiusToFahrenheit(fahrenheit) << std::endl;

    return 0;
}
