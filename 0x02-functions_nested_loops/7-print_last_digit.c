#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - return value
 * @x : the number to be checked
 * Return:0 or 1
 */



int print_last_digit(int x)
{
	int last;

	last = abs(x % 10);
	_putchar(last);

	return (0);
}
