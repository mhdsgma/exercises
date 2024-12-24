#include <iostream>
#include <vector>
#include <cmath>
#include "ex_03_stat_functions.h"
using namespace std;

double sum(const vector<double>& v) {
    double sum = 0.0;
    for (double num : v) {
        sum = sum + num;
    }
    return sum;
}

double mean (const vector<double> &v) {
    double sum = 0.0;
    for (double num : v) {
        sum += num;
    }
    return  sum / v.size();
}

double variance(const std::vector<double> &v) {
    double mean_x = mean(v);
    double sum = 0.0;
    for (double num : v) {
        sum+=pow(num-mean_x,2);
    }
    return sum /v.size();
}

double sd(const vector<double> &v) {
    return sqrt(variance(v));
}

double mad(const vector<double> &v) {
    double sum = 0.0;
    double mean_x = mean(v);
    for (double num : v) {
        sum += abs(num-mean_x);
    }
    return sum / v.size();
}
double kovarianz(const vector<double> &a , const vector<double> &b) {
    double sum = 0.0;
    double mean_x = mean(a);
    double mean_y = mean(b);
    for (int i = 0; i<a.size(); i++) {
        sum += (a[i] - mean_x) * (b[i] - mean_y);
    }
    return sum / (a.size() - 1);
}
double sum_diff(const vector<double> &v, double mean) {
    double sum = 0.0;
    for (double num : v) {
        sum +=(num - mean) * (num - mean);
    }
    return sum;
}
double correlation(const std::vector<double> &a, const std::vector<double> &b) {
    double mean_x = mean(a);
    double mean_y = mean(b);

    double sum = 0.0;

    for (int i = 0; i < a.size(); i++) {
        sum += (a[i]-mean_x) * (b[i]-mean_y);
    }
    double std_x = sqrt(sum_diff (a, mean_x));
    double std_y = sqrt(sum_diff (b, mean_y));

    return sum / (std_x * std_y);
}

void summary(const std::vector<double> &v){
cout << "The count of Elements is: " << v.size() << endl;
cout << "The sum of numbers is: " << sum(v) << endl;
cout << "The mean of numbers is: " << mean(v) << endl;
cout <<"The variance of numbers is: " << variance(v) << endl;
cout << "The standard deviation of numbers is: "<< sd(v) << endl;
cout << "The average absolute deviation is: " <<  mad(v) << endl;
}

void summary(const std::vector<double> &v, const std::vector<double> &a) {
    cout << "\n" << endl;
    cout << "The kovarianz is: " << kovarianz(v, v) << endl;
    cout << "The correlation is: " << correlation(v, a);

}
