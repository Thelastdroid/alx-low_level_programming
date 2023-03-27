#include "main.h"

/**
 * swap_int - The function swaps the values of two integers
 * @a: The first number swapped
 * @b: The second number swapped
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
