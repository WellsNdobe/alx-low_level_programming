#include "main.h"

/**
 * void swap_int - swaps values of integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
