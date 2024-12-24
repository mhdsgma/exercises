#include <iostream>
#include <iomanip>
#include <fstream>
#include <map>
#include <cmath>

std::map<int, double> readData(const char *configFileName) {
    std::ifstream infile(configFileName);

    std::map<int, double> result = {};

    int x;
    double p;
    while (infile >> x >> p) {
        result[x] = p;
    }
    return result;
}

double expectedValue(const std::map<int, double> &data) {
    double result = 0.0;
    for (auto [x, p]: data) {
        result += x * p;
    }
    return result;
}

double sd(const std::map<int, double> &data) {
    double ev = expectedValue(data);
    double tmp = 0.0;
    for (auto [x, p]: data) {
        tmp += (x - ev) * (x - ev) * p;
    }
    return sqrt(tmp);
}

int main(int argc, const char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " data-file" << std::endl;
        return 1;
    }

    std::map<int, double> data = readData(argv[1]);
    double mu = expectedValue(data);
    double sigma = sd(data);
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(3)
              << "µ = " << mu << "\n"
              << "σ = " << sigma << std::endl;

    return 0;
}

