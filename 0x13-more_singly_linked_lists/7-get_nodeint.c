#include"lists.h"

/**
 * get_nodeint_at_index - returns the node a certain index
 * in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node or NULL if not
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *z = head;

	while (z && k < index)
	{
		z = z->next;
		k++;
	}

	return (z ? z : NULL);
}

