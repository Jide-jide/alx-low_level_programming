#include "main.h"
#include <string.h>

/**
 * rev_string - prints rev of a string
 * @s : char type
 * Return : void
 */

void rev_string(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	       _putchar(s[i]);
	_putchar('\n');

	for (i = strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
}
