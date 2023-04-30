#include"lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked lista an index
 * @head: pointer of the first element in the list
 * @index: index of the node to delete
 * Return: (1) perfect, (-1) fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *z = *head;
	listint_t *c = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(z);
		return (1);
	}

	while (k < index - 1)
	{
		if (!z || !(z->next))
			return (-1);
		z = z->next;
		k++;
	}

	c = z->next;
	z->next = c->next;
	free(c);

	return (1);
}

