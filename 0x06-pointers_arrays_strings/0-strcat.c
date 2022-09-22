#include "main.h"
#include <string.h>

/**
 * *_strcat - returns concatenation
 * @dest : string type destination
 * @src : string type destionation

 * Return : poiner to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	n = string_length(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);
}
