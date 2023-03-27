#include "main.h"

/**
 * _strlen -This function returns the length of a string
 * @s: The particular string being looked at
 * Return: The length of the strin
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
