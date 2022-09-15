#include "main.h"

/**
*_isupper(int c)-Write a function that checks for uppercase character.
* @c : character to check the case
*Return: Always 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 'A' && < 'Z')
		return (1);
	else
		return (0);
}

