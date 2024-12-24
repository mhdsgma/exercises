#include "functions.h"

double perceptionReactionDistanc (double velocity) {
    return (velocity / 10) * 3;
}

double breakingDistance(double velocity) {
    return (velocity / 10) * (velocity / 10);
}