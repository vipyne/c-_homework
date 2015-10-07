#include <iostream>
#include <math.h>

#define ACCELERATION 32

int main (void) {

    int timeInSeconds;
    int distance;

    std::cout << "enter time (in seconds): ";
    std::cin >> timeInSeconds;

    // Distance=1/2 * acceleration * time ^ 2
    distance = .5 * ACCELERATION * pow(timeInSeconds, 2.0);

    std::cout << "object will fall a distance of " << distance << " feet.\n";

    return 0;
}
