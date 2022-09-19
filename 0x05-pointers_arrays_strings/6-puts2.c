#include "main.h"
#include <string.h>

/**
 * puts2 - puts every other two
 * @str : str argument
 * Return : void
 */

void puts2(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
