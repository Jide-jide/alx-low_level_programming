#include <stdio.h>
#include <ctype.h>

/**
*_islower(int c)-Write a function that checks for lowercase character.
*Return: Always 0 (Success) 
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
