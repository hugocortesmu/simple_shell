#include "shell.h"
/**
* counter_words - counts the number of words
* @str: string
* Return: the counter
*/

unsigned int counter_words(char *str)
{
	int state = 0;
	unsigned int counter = 0;

	while (*str != '\0')
	{
		if (*str == 32 || *str == 10 || *str == 9)
		{
			state = 0;
		}
		else if (state == 0)
		{
			state = 1;
			++counter;
		}
		++str;
	}
	return (counter);
}
