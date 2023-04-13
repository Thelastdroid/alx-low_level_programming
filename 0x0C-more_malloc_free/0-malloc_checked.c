#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - This function allocates memory using malloc
 * @b: The number of bytes
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
