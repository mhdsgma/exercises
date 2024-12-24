#include <iostream>
#include <vector>
#include <string>
#include "ex_05.h"

using std::cout, std::cin, std::endl, std::vector, std::string;

int main() {
    vector<double> numbers = {};
    vector<double> values = {};

    double tmp1;
    double tmp2;
    string endYN = "no";

    while (endYN != "y") {
        cout << "Enter two numbers: ";
        cin >> tmp1 >> tmp2;
        numbers.push_back(tmp1);
        values.push_back(tmp2);
        cout << "End (y/n)? ";
        cin >> endYN;
    }

    summary(numbers);
    summary(values);
    summary(numbers,values);

    return 0;
}
