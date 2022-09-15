#include <stdio.h>
#include <ctype.h>

/**
*_isupper(int c) - checks if upper.
* @c : character to check the case
*Return: Always 0 (Success)
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}

