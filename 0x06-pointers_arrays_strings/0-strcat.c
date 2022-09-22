#include "main.h"
#include <string.h>

/**
 * _strcat - returns concatenation
 * @dest : string type destination
 * @src : string type destionation
 * Return : char
 */

char *_strcat(char *dest, char *src)
{
	char *new = strcat(*dest, *src);

	return (new);
}
