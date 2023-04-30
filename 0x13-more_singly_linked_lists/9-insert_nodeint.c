#include"lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * at a give position
 * @head: pointer in the first node in the list
 * @idx: index where the new node is added
 * @n: info to put the new node
 * Return: pointer to the new node, or NULL if not
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new;
	listint_t *z = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (k = 0; z && k < idx; k++)
	{
		if (k == idx - 1)
		{
			new->next = z->next;
			z->next = new;
			return (new);
		}
		else
			z = z->next;
	}

	return (NULL);
}

