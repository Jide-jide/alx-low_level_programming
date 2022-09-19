#include "main.h"
#include <sting.h>

/**
 * print_rev - prints rev of a string
 * @s : char type
 * Return : void
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}	
