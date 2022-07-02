#include <stdio.h>

/**
 * main - prints all alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char letters[] = "abcdeghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
		putchar(letters[i]);

	putchar("\n");
	return (0);
}
