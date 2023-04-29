#include"lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint-t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *z;

	while (head)
	{
		z = head->next;
		free(head);
		head = z;
	}
}
