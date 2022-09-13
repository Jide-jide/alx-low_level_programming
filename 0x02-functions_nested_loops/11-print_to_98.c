#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*print_to_98 - print numto 98
*@n : is satrting point
*/

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98");
}

