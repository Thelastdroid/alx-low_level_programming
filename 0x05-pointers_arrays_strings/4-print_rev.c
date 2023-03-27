#include "main.h"

/**
 * print_rev - this function prints a string, in reverse
 * @s: the string to be reversed
 * return: 0
 */

void print_rev(char *s)
{
	int l = 0;
	int o;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (o = l; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
