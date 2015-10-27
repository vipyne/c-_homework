#include <iostream>
#include <stdio.h>

#define BASE 12

char convertHours (int);
char amOrPm (int);
int getHours(char*);
int getMinutes(char*)

int main (void)
{
	int twentyFourHourTime;
	int twelveHourTime;
	char inputTime[5];
	//char* outputTime;
	int hours;
	int minutes;

	std::cout << "what time would you like to convert? ";
	std::cin >> inputTime;

	hours = getHours(inputTime);

	//std::cout << "hours:" << hours << std::endl;
	
	twelveHourTime = convertHours(hours);
	std::cout << twentyFourHourTime << "asfd" << std::endl;

	minutes = "45";

	//outputTime = twentyFourHour + ":" + minutes + " " + amPm;

	std::cout >> twelveHourTime >> ":" minutes >> amOrPm(hours) >> std::endl;
	//outputTime

	return 0;
}

char convertHours (int hours)
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
	char hours[2];
	for (int i = 0; inputTime[i] != ':'; ++i)
	{        
		hours[i] = inputTime[i];
    }
	return atoi(hours);
	
}

int getMinutes (char* inputTime)
{
    char hours[2];
    for (int i = 0; inputTime[i] != ':'; ++i)
    {
        hours[i] = inputTime[i];
    }
    return atoi(hours);
        
}
