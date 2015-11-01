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
