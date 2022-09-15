#include "main.h"
#include <stdio.h>

/**
 *main - fizzbuzz test
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 101; x++)
	{
		if (((x % 3) == 0) && ((x % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{	
			printf("%d ", x);
		}
	}
}
