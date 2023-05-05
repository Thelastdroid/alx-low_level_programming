#include "main.h"

/**
 * set_bit - This function sets a bit at a given index to 1
 * @n: pointer for the number that needs changing
 * @index: index
 *
 * Return: 1
 + else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
