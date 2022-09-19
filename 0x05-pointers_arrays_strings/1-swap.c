#include "main.h"

/**
 * swap_int - swaps two nums
 * @a : int type val
 * @b : int type val
 * Return : void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
