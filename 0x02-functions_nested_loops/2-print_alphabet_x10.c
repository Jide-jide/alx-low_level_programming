#include "main.h"

/**
*main - Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
*Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
			_putchar('\n');
	}
}

