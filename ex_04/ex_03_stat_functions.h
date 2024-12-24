#pragma once

double sum(const std::vector<double>& v);
double mean (const std::vector<double> &v);
double variance (const std::vector<double> &v);
double sd(const std::vector<double> &v);
double mad(const std::vector<double> &v);
double kovarianz(const std::vector<double> &a , const std::vector<double> &b);
void summary(const std::vector<double> &v);
void summary(const std::vector<double> &v, const std::vector<double> &a);