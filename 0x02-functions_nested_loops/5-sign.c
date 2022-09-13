#include <stdio.h>

/**
*print_sign - Write a function that prints the sign of a number.
* @n : character to check the case
*Return: Always 0 (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		printf(",");
		printf(" ");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		printf(",");
		printf(" ");
		return (0);
	}
	else if (n < 0)
	{
		printf("-");
		printf(",");
		printf(" ");
		return (-1);
	}
}
