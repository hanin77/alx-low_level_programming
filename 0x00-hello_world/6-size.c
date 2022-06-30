#include <stdio.h>

/**
 *  main - Enty point
 *  prints the size of various types on the computer it is compiled and run on
 *  Return: 0 (Success)
*/

int main(void)
{
	char characterVar;
	int integerVar;
	long longIntegerVar;
 	long long longlongVar;
	float floatVar;
	printf("Size of a char: %d byte(s)\n", sizeof(characterVar));
	printf("Size of an int: %d byte(s)\n", sizeof(integerVar));
	printf("Size of a long int: %d byte(s)\n", sizeof(longIntegerVar));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongVar));
	printf("Size of a float: %d byte(s)\n", sizeof(floatVar));
	return (0);

}
