#include "main.h"

/**
*_islower(int c)-Write a function that checks for lowercase character.
* @c : character to check the case
*Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 'A' && < 'Z')
		return (1);
	else
		return (0);
}

