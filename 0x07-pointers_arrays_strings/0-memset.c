#include "main.h"

/**
 * _memset - Write a function that fills memory,
 *  with a constant byte.
 *  @s : pointer type
 *  @b : char to assign
 *  @n : n size
 *  Return : the memory area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s = s + i;
		*s = b;
	}
	return (s);
}
