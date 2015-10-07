// the amount the con- sumer needs to receive, the interest rate, and the duration of the loan in months. 
// usage ./hw4 <consumerNeed> <interestRate>, <months>
// => face value:
// => monthly payment:


// wip


#include <iostream>

#define MONTHSAYEAR 12
#define PERCENTAGE .01

int main (int argc, char *argv[]) {

	float consumerNeed        = atof(argv[1]);
	float percentInterestRate = atof(argv[2]);
	int months                = atoi(argv[3]);

	float interestRate = percentInterestRate * PERCENTAGE;
	float loanDuration = (float)months / (float)MONTHSAYEAR;

	std::cout << "interest rate" << interestRate << "\n";
	std::cout << "loan duration" << loanDuration << "\n";

	float interest      = interestRate * ;
	float totalInterest = interest * loanDuration; 
	std::cout << "interest" << interest << "\n";
	std::cout << "total interest" << totalInterest << "\n";
	
	float faceValue      = consumerNeed + totalInterest;
	float monthlyPayment = faceValue / months;

	std::cout << "face value: $" << faceValue << "\n";
	std::cout << "monthly payment: $" << monthlyPayment << "\n";
	

	return 0;
}
