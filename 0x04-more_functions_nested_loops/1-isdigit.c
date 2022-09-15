#include "main.h"

/**
 * _isdigit - checks if the character is digit
 * @c: is the int used for the argument of the function.
 * Return: successful digit is 1 is 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
