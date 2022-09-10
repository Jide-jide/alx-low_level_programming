#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int x;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, x);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0", n, x);
	}
	else if (x < 6 && x != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, x);
	}
	return (0);
}
