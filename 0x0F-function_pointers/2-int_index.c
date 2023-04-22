#include "function_pointers.h"

/**
 * int_index - This funtion returns the index
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer
 * Return: 0 else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
