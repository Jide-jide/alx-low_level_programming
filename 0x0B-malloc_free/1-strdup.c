#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function pointing to new copied memory allocation
 * @str: string to be copied
 * Return: pointer to new memory location, Null otherwise
 **/

char *_strdup(char *str)
{
	unsigned int i;
	char *p = NULL;

	if (str)
	{
		p = (char *)malloc((strlen(str) + 1) * sizeof(char));

		if (p)
		{
			for (i = 0; i <= strlen(str); i++)
			{
				p[i] = str[i];
			}
			i += 1;
			p[i] = '\0';
		}
		else
			return (NULL);
	}
	else
		return (NULL);
	return (p);
}
