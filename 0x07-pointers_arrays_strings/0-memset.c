#include "main.h"
/**
 * _memset - This function fills memory with a constant byte
 * @s: the first array
 * @b: The value
 * @n: this is the number of bytes
 * Return: new array
 */

char *_memset(char *s, char b, unsigned int n)
	{
	int i = 0;
	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
