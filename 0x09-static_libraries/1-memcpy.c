#include "main.h"

/**
 *_memcpy - This is a function that copies memory area
 *@dest: where the memory is stored
 *@src: where the memor is  copied
 *@n: number of bytes
 *
 *Return: desired answer
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
