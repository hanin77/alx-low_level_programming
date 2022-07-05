#include "main.h"

/**
* printalphabet - print the alphabet, in lowercase,
* followed by a new line
* Return: 0.
*/
void printalphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
