#include "main.h"
#include <string.h>
/**
 * puts_half - puts half of str
 * @str : char type
 * Return : void
 */

void puts_half(char *str)
{
	unsigned int i;
	int n = strlen(str) / 2;

	if (n % 2 == 0)
	{
		for (i = n; i < strlen(str); i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = n; i < strlen(str) - 1; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
