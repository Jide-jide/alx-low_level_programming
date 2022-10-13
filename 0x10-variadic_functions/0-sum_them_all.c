#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - retruns sum of vars entered
 * @n : int type var
 *
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	if (n)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(args, int);
		return (sum);
	}
	else
		return (0);
}
