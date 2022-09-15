#include "main.h"

/**
 * more_numbers - prints nums
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i;
	char j;

	while (i <= 10)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
		i++;
	}
}
