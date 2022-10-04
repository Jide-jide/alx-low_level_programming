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

	if (size == 0)
		return (0);
	else
	{
		p = (char *)malloc(size * sizeof(int));

		if (p == NULL)
			return (NULL);
		else
		{
			for (i = 0; i < size; i++)
			{
				*p = c;
			}
		}
	}
	return (p);
}
