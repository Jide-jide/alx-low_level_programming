#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - Create dynamic array and initialize with a character
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = NULL;

	if (size > 0)
	{
		p = (char *)malloc(size * sizeof(char));

		if (p)
		{
			for (i = 0; i < size; i++)
			{
				*p = c;
			}
		}
		else
			return (NULL);
	}
	else 
		return (NULL);
	return (p);
}
