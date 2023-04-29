#include"lists.h"

/**
 * free_listint2 - freesa linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *z;

	if (head == NULL)
		return;

	while (*head)
	{
		z = (*head)->next;
		free(*head);
		*head = z;
	}

	*head = NULL;
}

