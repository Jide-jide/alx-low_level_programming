#include "main.h"

/**
 * more_numbers - prints nums
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	char i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
