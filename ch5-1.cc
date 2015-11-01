#include <iostream>

int averageRainfall[] = { 34, 23, 54, 12, 43, 74, 97, 3, 23, 32 };

int monthSwitch (char*);

int main (void)
{
	char currentMonth[10];

	std::cout << "what is the current month?: ";
	std::cin >> currentMonth;

	std::cout << monthSwitch(currentMonth) << std::endl;

	return 0;
}

int monthSwitch (char* currentMonth)
{
	switch(*(currentMonth))
	{
	case "january" :
	case "January" :
		return 0;
		break;
	case "february" :
	case "February" :
		return 1;
		break;
	case "march" :
	case "March" :
		return 2;
		break;
	case "april" :
	case "April" :
		return 3;
		break;
	case "may" :
	case "May" :
		return 4;
		break;
	case "june" :
	case "June" :
		return 5;
		break;
	case "july" :
	case "July" :
		return 6;
		break;
	case "august" :
	case "August" :
		return 7;
		break;
	case "september" :
	case "September" :
		return 8;
		break;
	case "october" :
	case "October" :
		return 9;
		break;
	case "november" :
	case "November" :
		return 10;
		break;
	case "december" :
	case "December" :
		return 11;
		break;
	default :
		return 0;
	}
}
