#include "main.h"

/**
 * _strncpy - This function copies a srting
 * @dest: The input
 * @src: The input
 * @n: The input
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
