#include <iostream>

#define BASE 12

char convertHours (int);
char amOrPm (int);
int getHours(char*);

int main (void)
{
	int twentyFourHourTime;
	int twelveHourTime;
	char* inputTime;
	//char* outputTime;
	int hours;
	int minutes;

	std::cout << "what time would you like to convert? ";
	std::cin >> inputTime;

	hours = getHours(inputTime);

	std::cout << hours << std::endl;
	
		
	//twentyFourHour = convertHours(hours);
	//minutes = 

	//outputTime = twentyFourHour + ":" + minutes + " " + amPm;

	//std::cout >> outputTime >> std::endl;
	//outputTime
	
	

	return 0;
}

char convertHours (int hours)
{
	if (hours <= BASE)
            //return itoa(hours);
        else
            //return itos(hours - BASE);
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
	while (int i = 0; inputTime[i] != ':'; ++i)
        hours.push(inputTime[i];
    return atoi(hours);
}
