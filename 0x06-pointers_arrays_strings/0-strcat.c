#include "main.h"
#include <string.h>

/**
 * *_strcat - returns concatenation
 * @dest : string type destination
 * @src : string type destionation
 *
 * Return : poiner to dest
 */

char *_strcat(char *dest, char *src)
{
	char *new = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (new);
}
