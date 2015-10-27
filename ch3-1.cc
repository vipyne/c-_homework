#include <iostream>
#include <stdio.h>
#include <string.h>

#define LITERINGALLONS 0.264179

char* itoa (int, char*, int);
//int strcmp (char*, char*);

int main (void) {

	int miles;
	int mpg = miles/LITERINGALLONS;	
	char milesString[4];

	std::cout << "how many miles did you travel by car? \n";
	std::cout << "(enter 'none' to quit)\n";
	
	std::cout << itoa(miles, milesString, 10) << std::endl;

	//while (strcmp(itoa(miles), "none") != 0) 
	//{
	//	std::cout << strcmp(miles, "none") != 0 << std::endl;
	
	//	std::cout << "miles: ";
	
	//	std::cin >> miles;
	
	//	std::cout << "miles per gallon: " << mpg << std::endl;

	//}

	return 0;

}
