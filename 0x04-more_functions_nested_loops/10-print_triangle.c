#include "main.h"

/**
 * print_triangle - print triangle
 * @size : int size of shape
 * Return: void
 */

void print_triangle(int size)
{
	int x, y;
	
	for (x = 1;x < size; x++)
	{
		for (y = 1; y < x; y++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
