#include <stdio.h>

/**
 * main - prints all alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 25; i++)
		putchar(letters[i]);

	putchar('\n');
	return (0);
}
