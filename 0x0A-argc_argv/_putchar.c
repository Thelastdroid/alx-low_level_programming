#include <stdio.h>
#include "main.h"

/**
 * _putchar - This program writes the character c
 * @c: The character
 *
 * Return: 1
 * -1 if there is an error
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
