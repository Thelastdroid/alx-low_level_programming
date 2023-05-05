#include "main.h"

/**
 * clear_bit - This function sets
 * the value of a given bit to 0
 * @n: pointer for the number that has to be changed
 * @index: index
 *
 * Return: 1
 * else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
