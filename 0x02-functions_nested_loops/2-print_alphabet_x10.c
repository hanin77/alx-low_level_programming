#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet 10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
												}
		_putchar('\n');
	}
}
