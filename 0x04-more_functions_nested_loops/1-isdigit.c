#include "main.h"

/**
 * _isupper - checks if the character is digit
 * @c: is the int used for the argument of the function.
 * Return: 1 if digit else 0 if not
 */

int _isdigit(int c)
{
	if (c >='0' && c <='9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
