#include "lists.h"

/**
 * listint_len - This functio returns the number of elements in a linked lists
 * @h: The linked list that we need to traverse
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
