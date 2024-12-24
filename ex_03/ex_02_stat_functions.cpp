#include <vector>
#include <cmath>
#include "ex_02_stat_functions.h"
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

