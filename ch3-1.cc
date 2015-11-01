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

//CH4-1
#include <iostream>
#include <stdio.h>

#define BASE 12

int convertHours (int);
char amOrPm (int);
int getHours (char*);
int getMinutes (char*);

int main (void)
{
	char* inputTime;

  int twentyFourHourTime;
  int twelveHourTime;
	int hours;
	int minutes;

  std::cout << "what time would you like to convert? ";
  std::cin >> inputTime;

  hours = getHours(inputTime);
  twelveHourTime = convertHours(hours);

  minutes = getMinutes(inputTime);  

	std::cout << twelveHourTime << ':' << minutes << (amOrPm(hours)) << std::endl;

	return 0;
}

int convertHours (int hours)
{
	if (hours <= BASE)
        return hours;
    else
        return hours - BASE;
}

char amOrPm (int hours)
{
	if (hours <= BASE)
		return 'A';
	else
		return 'P';
}

int getHours (char* inputTime)
{
	char hours[3];
	for (int i = 0; inputTime[i] != ':'; ++i)
	{        
		hours[i] = inputTime[i];
    }
	return atoi(hours);
	
}

int getMinutes (char* inputTime)
{
    char minutes[3];
    int minuteFlag = 0;

    for (int i = 0; inputTime[i] != '\n'; ++i)
    {
      if (inputTime[i] == ':')
        minuteFlag = 1;
      if (minuteFlag)
      {  
        minutes[i] = inputTime[i];
      }
    }
    return atoi(minutes);
}

// v-money c_homework  (master) $ g++ ch4-1.cc -o zxcv
// v-money c_homework  (master) $ ./zxcv
// what time would you like to convert? 12:23
// Segmentation fault: 11      :(

//CH5-1
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

// incomplete
