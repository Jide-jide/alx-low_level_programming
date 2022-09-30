#include <stdio.h>

/**
* main -  Prints number of arguements
* @argc: arguement count
* @argv: array of pointers to CLI arguement
* Return: 0
**/

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++);
		i += 1;
	printf("%d", i);
	return (0);
}
