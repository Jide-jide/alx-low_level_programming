#include "main.h"
#include <string.h>

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p;

	for (i = 0; i <= strlen(s); i++)
	{
		if (s[i] == c)
		{
			p = s[i];

			return (p);
			break;
		}
		else
		{
			return (0);
		}
	}
}
