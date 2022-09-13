#include "main.h"
#include <stdio.h>

/**
 *jack_bauer - Write a function that prints every,
 *minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59.
 * Return: integer value
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
			printf("%02d:%02d\n", i, j);
	}
}

