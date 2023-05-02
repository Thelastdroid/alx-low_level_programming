#include "lists.h"

/**
 * print_listint - This function prints all the elements of a linked list
 * @h: The linked list that need to be printed
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
