#include <iostream>
#include <math.h>
using namespace std;

#define METRICTONtoOUNCE 35273.92

int main(int argc, char *argv[]) {
    
    int ounces = atoi(argv[1]);
    float tons;
    float boxes;

    tons = ounces / METRICTONtoOUNCE;

    boxes = ceil(METRICTONtoOUNCE / ounces);

    cout << ounces <<  " oz is " << tons << " metric tons \n";
    cout << boxes << " boxes needed to yield one metric ton of cereal \n";
    
    return 0;
}
