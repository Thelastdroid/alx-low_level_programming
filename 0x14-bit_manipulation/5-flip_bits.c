#include "main.h"

/**
 * flip_bits - This function counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: The bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int num;
	unsigned long int diff = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num = diff >> i;
		if (num & 1)
			count++;
	}

	return (count);
}
