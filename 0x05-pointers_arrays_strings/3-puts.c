#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - prints a string
 * @str : char type
 * Return : void
 */

void _puts(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		puts(*str[i], stdout);
	}
}
