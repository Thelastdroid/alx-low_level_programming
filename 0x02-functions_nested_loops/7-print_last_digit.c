#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @c: The value analysed
 * Return: The last digit
 * n: input
*/

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
