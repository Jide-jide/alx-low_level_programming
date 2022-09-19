#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - prints a string
 * @str : char type 
 * Return : void
 */

void _puts(char *str)
{
	long int i;

	for (i = 0; i < strlen(str); i++)
	       putchar(str[i]);
}	
