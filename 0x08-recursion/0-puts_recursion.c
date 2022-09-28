#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: character to be printed
 * Return: returns void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		_putchar(s);
	else
	{
		_putchar(_puts_recursion( s++));
	}
}
