#include <stdio.h>
#include "main.h"

/**
*print_sign - Write a function that prints the sign of a number.
* @n : character to check the case
*Return: Always 0 (Success)
*/

int print_sign(int n)
{
	int return_type;

	if (n > 0)
	{
		return_type = (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return_type = (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return_type = (-1);
		_putchar('-');
	}
	return (return_type);
}
