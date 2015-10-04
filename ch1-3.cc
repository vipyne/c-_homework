// workers at a particular company have won a 7.6% pay increase retroactive for six months. 
// Write a program that takes an employee’s previous annual salary as input and outputs 
// the amount of retroactive pay due the employee, the new annual salary, and the new monthly salary. 
// Use a variable declaration with the modifier const to express the pay increase.

#include <iostream>
#include <iomanip>

#define INCREASE 7.6

int main (int argc, char *argv[]) {

	float decimalIncrease  = INCREASE * .01;
	float totalIncrease    = decimalIncrease + 1;
	float annualSalary     = atof(argv[1]);
	float monthlySalary    = annualSalary / 12;
	float retroactivePay   = decimalIncrease * monthlySalary * 6;
	float newMonthlySalary = monthlySalary * totalIncrease;
	float newAnnualSalary  = annualSalary * totalIncrease;
	
	std::cout << "retroactive pay: " << std::fixed << std::setprecision(2) << retroactivePay << "\n";
	std::cout << "new montly salary: " << std::fixed << std::setprecision(2) << newMonthlySalary << "\n";
	std::cout << "new anual salary: " << std::fixed << std::setprecision(2) << newAnnualSalary << "\n";

	return 0;
}
