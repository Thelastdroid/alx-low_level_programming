#include "main.h"
#include <stdlib.h>
/**
 * create_array - This function creates array
 * of a specified size and assign char c
 * @size: The size of the array
 * @c: character
 * Return: The pointer to an array
 */

char *create_array(unsigned int size, char c)

{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);

}
