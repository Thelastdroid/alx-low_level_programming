#include "main.h"

/**
 * print_sign - will show the numbers sign
 * @n: Represents the number being checked
 * Return: 1 -> positive number ,-1 ->  negative number ,0 ->  anything else
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
