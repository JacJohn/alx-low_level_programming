#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
