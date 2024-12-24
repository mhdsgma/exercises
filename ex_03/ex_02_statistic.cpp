#include <iostream>
#include <vector>
#include "ex_02_stat_functions.h"
using namespace std;

int main() {

    vector<double> numbers = {1,2,3,4,5};
    cout << "The count of Elements is: " << numbers.size() << endl;
    cout << "The sum of numbers is: " << sum(numbers) << endl;
    cout << "The mean of numbers is: " << mean(numbers) << endl;
    cout <<"The variance of numbers is: " << variance(numbers) << endl;
    cout << "The standard deviation of numbers is: "<< sd(numbers) << endl;
    cout << "The average absolute deviation is: " <<  mad(numbers) << endl;
    return 0;
}
