#include"lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: the info in the element that was deleted,
 * or 0 if not
 */
int pop_listint(listint_t **head)
{
	listint_t *z;
	int y;

	if (!head || !*head)
		return (0);

	y = (*head)->n;
	z = (*head)->next;
	free(*head);
	*head = z;

	return (y);
}

