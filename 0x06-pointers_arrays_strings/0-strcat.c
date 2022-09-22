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
	int len_dest = strlen(dest);
	int len_src = strlen(src);
	int i;

	for (i < 0; i <= len_src; i++)
	{
		dest[len_dest + i]  = src[i];
	}
	
	return (dest);
}
