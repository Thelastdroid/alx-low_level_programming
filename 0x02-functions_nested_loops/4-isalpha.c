#include "main.h"

/**
 * _isalpha -Looks for an alphabetic character
 * @c: The character to be checked
 * Return: 1 is an alphsbetic character and 0 is everything else
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
