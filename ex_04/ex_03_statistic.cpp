#include <iostream>
#include <vector>
#include "ex_03_stat_functions.h"
using namespace std;


int main() {

    vector<double> numbers = {};
    vector<double> values = {};

    double tmp1;
    double tmp2;
    string endYN = "no";

    while (endYN != "y") {
        cout << "pls enter 2 Numbers: ";
        cin >> tmp1 >> tmp2;
        numbers.push_back(tmp1);
        values.push_back(tmp2);
        cout << "End (y/n)?";
        cin >> endYN;
    }


    cout << "Numbers: " << endl;
    summary(numbers);
    cout  << "Values: " << endl;
    summary(values);
    cout << endl << "Values and Numbers: " << endl;
    summary(numbers,values);
    return 0;
}
