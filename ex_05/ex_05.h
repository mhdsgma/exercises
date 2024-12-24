#pragma once
#include <vector>

double sum(const std::vector<double> &v);
double mean(const std::vector<double> &v);
double variance(const std::vector<double> &v);
double sd(const std::vector<double> &v);
double aad(const std::vector<double> &v);

void summary(const std::vector<double> &v);

double correlation(const std::vector<double> &x, const std::vector<double> &b);
double covariance(const std::vector<double> &x, const std::vector<double> &b);
void summary(const std::vector<double> &x, const std::vector<double> &y);
std::pair<std::vector<double>, std::vector<double>> readData(const char *configFileName);