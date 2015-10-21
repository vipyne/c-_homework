#include <iostream>
#include <cstdlib>
#include <cstring>

//const std::string PROSE = "To be or not to be – that is the question: Whether 'tis nobler in the mind to suffer the slings and arrows of outrageous fortune, or to take arms against a sea of troubles and, by opposing, end them. To die, to sleep";

int stringLength (const char*);
int symbol (const char*, char);
int symbol (const char*, const char*);

int main (int argc, char* argv[])
{
	
	const char* PROSE = "To be or not to be – that is the question: Whether 'tis nobler in the mind to suffer the slings and arrows of outrageous fortune, or to take arms against a sea of troubles and, by opposing, end them. To die, to sleep";
	std::cout << stringLength(PROSE) << std::endl;
	std::cout << symbol(PROSE, ' ') << std::endl;
	std::cout << symbol(PROSE, "the") << std::endl;

	return 0;
}

int stringLength (const char* str)
{
	int length = 0;
	const char* stringPointer = str;

	while ( *stringPointer != '\0')
	{
		stringPointer++;	
		length++;
	} 

	return length;
}

int symbol (const char* str, char space)
{
	int count = 0;
	const char* stringPointer = str;

	while ( *stringPointer != '\0')
	{
		if ( *stringPointer == space )
			count++;
		stringPointer++;
	}	

	return count;
}

int symbol (const char* str, const char* word)
{
	int count = 0;
    const char* stringPointer = str;
	const char* wordPointer = word;

    while ( *stringPointer != '\0')
    {   
        if ( *stringPointer == *wordPointer )
            count++;
        stringPointer++;
    } 

	return count;
}
