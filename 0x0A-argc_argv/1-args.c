#include <stdio.h>
#include "main.h"

/**
 * main - Tis function print the number of
 * arguments passed to the program
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
