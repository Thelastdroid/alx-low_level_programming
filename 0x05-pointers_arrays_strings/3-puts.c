#include "main.h"

/**
 * _puts - This function prints a string
 * @str: represents the string to be printed out
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
