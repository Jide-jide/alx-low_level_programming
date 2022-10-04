#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function pointing to new copied memory allocation
 * @str: string to be copied
 * Return: pointer to new memory location, Null otherwise
 **/

char *_strdup(char *str)
{
	char *p = NULL;

	if(str)
	{
		p = (char *)malloc(strlen(str) * sizeof(char));

		if (p)
			*p = str;
		else
			return (NULL);
	}
	else
		return (NULL);
	
	return (p);
	
	free(p);
}
