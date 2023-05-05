#include "main.h"

/**
 * get_endianness - This function checks if
 * a machine is little or big endian
 * Return: 1 for little
 *  Else 0
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
