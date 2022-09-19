#include "main.h"
#include <string.h>

/**
 * rev_string - prints rev of a string
 * @s : char type
 * Return : void
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
}
