#include "main.h"
/**
 *_memcpy - this is a function that copies memory area
 *@dest: memory store
 *@src: memory
 *@n: amount of bytes
 *Return: the copied memeory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
