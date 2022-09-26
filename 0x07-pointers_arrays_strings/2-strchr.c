#include "main.h"
#include <string.h>

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */

char *_strchr(char *s, char c)
{
	unsigned int i;
	int *p;

	for (i = 0; i <= strlen(s); i++)
	{
		if (s[i] == c)
		{
			p = *s[i];

			return (p);
			break;
		}
		else
			return (0);
	}
}
