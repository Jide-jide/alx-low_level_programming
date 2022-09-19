#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - prints rev of a string
 * @s : char type
 * Return : void
 */

void rev_string(char *s)
{
	unsigned int i;
	int j;

	for (i = 0; i <= strlen(s); i++)
		printf(s[i]);
	_putchar('\n');
	for (j = strlen(s) - 1; j >= 0; j--)
		printf(s[j]);
}
