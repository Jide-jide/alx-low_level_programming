#include "main.h"

/**
 *_strcpy - update value.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 */

char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}

	for (; x < y; x++)
	{
		dest[x] = src[x];
	}

	dest[y] = '\0';

	return (dest);
}
