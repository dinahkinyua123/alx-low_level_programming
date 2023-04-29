#include"lists.h"

/**
 * sum_listint - calculates the sum of all the info in
 * the listint_t list
 * @head: first node in the linked list
 * Return: resulting the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *z = head;

	while (z)
	{
		sum += z->n;
		z = z->next;
	}

	return (sum);
}

