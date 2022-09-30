#include <stdio.h>

/**
* main -  Prints number of arguements
* @argc: arguement count
* @argv: array of pointers to CLI arguement
* Return: 0
**/

int main(int argc, char *argv[])
{
	int i, x = 0;

	for(i = 0; i < argc; i++);
	{
		x += 1;
	}
	printf("%d\n", x);
	return (0);
}
