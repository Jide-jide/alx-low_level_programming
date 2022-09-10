#include <stdio.h>

/**
 * main - returns digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}

	putchar(10); /* this is an ascii code for new line*/

	return (0);
}
