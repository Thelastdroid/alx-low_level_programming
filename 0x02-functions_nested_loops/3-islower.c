#include "main.h"

/**
 * _islower - Checks for lowerase characters
 * @c: the variable to be checked
 * Return: 1 is for lowercase charaters and 0 is for everyting  else
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	return (0);
}
