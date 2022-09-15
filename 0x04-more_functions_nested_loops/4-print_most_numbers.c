#include "main.h"

/**
 * print_most_numbers - prints all nums except 2 and 4
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	char j;

	for (j = 0; j <= 9; j++)
	{
		if (j == 2 || j == 4)
		{
			continue;
		}
		else
		{
			_putchar('0' + j);
		}
	}
	_putchar('\n');
}
