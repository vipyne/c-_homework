// CH3-1
#include <iostream>

#define LITERINGALLONS 0.264179

int main (void) {

	char miles[] = "a";
    
	std::cout << "how many miles did you travel by car? \n";
	std::cout << "(enter 'none' to quit)\n";
	
	while ( miles[0] != 'n' ) 
	{
		std::cout << "miles: ";
	
		std::cin >> miles;
	
		std::cout << "miles per gallon: " << atoi(miles)/LITERINGALLONS << std::endl;
	}

	return 0;
}

// v-money c_homework  (master) $ ./qwer
// how many miles did you travel by car? 
// (enter 'none' to quit)
// 1
// miles: 1234
// miles per gallon: 4671.08
// miles: 36345
// miles per gallon: 137577
// miles: 8
// miles per gallon: 30.2825
// miles: 7
// miles per gallon: 26.4972
// miles: 54
// miles per gallon: 204.407
// miles: 2473686
// miles per gallon: 9.36367e+06
// miles: none
// miles per gallon: 0

// CH3-