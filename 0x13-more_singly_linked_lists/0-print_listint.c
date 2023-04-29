#include"lists.h"

/**
 * print_listint - prints all the elements of a limited list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t y = 0;

	while (h)
	{
		printf("%d\n", h->n);
		y++;
		h = h->next;
	}

	return (y);
}

