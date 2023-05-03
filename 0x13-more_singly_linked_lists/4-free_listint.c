#include "lists.h"

/**
 * free_listint - This function frees a linked list
 * @head: The one to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
