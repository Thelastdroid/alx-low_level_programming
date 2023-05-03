#include "lists.h"

/**
 * pop_listint - This function deletes the head node
 * @head: The first elements pointer
 *
 * Return: the deleted data
 * else 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!*head || !head)
	{
		return (0);
	}

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
