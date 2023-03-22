#include "main.h"

/**
 * _abs - calculates the absolute value of an integer
 * @c - The value being checked
 * Return: zero or the absolute value
*/

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		abs_val = (c * -1);
		return (abs_val);
	}
	return (c);
}

