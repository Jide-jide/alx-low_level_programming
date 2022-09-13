#include <stdio.h>

/**
*main - Write a function that prints the alphabet,
*in lowercase, followed by a new line.
*Return: Always 0 (Success)
*/

void print_alphabet(void);

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		printf("%c", i);
}

int main(void)
{
	print_alphabet(void);
	return (0);
}
