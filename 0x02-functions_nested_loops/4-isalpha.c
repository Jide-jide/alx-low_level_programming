#include <stdio.h>
#include <ctype.h>

/**
*_isalpha(int c) - Write a function that checks for lowercase character.
* @c : character to check the case
*Return: Always 0 (Success)
*/

int _isalpha(int c)
{
	if (isalpha(c) || islower(c) || isupper(c))
		return (1);
	else
		return (0);
}
