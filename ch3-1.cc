#include <iostream>

#define LITERINGALLONS 0.264179

int main (void) {

	int miles;
	int mpg = miles;	

	std::cout << "how many miles did you travel by car? \n";
	std::cout << "(enter 'none' to quit)\n";
	std::cout << "miles: ";
	
	while (miles != "none") {
		std::cin >> miles;
	
		std::cout << "miles per gallon: " << mpg << "\n";

	}

	return 0;


	


}
