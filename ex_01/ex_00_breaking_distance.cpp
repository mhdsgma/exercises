#include <iostream>
#include "functions.h"

int main () {

    std::cout << "v[km/h]\tReDis[m]\tBreDis[m]\ttotalDis[m]" << std::endl;

    for (int v = 0; v < 250; v+=10 ) {
        double reackDis = perceptionReactionDistanc(v);
        double  breDis= breakingDistance(v);
        double totalStoppingDistance = reackDis + breDis;
        std::cout << v << "\t" << reackDis << "\t \t" << breDis << "\t \t" << totalStoppingDistance << std::endl;
    }

    return 0;
}
