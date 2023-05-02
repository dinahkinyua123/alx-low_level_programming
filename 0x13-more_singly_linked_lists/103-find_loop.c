#include<stdio.h>
#include"lists.h"

/**
 * find_listint_loop - counts the nmber of unique nodes
 * in a looped_listint_t linked list
 * @head: pointer to the head of the listint_t to check
 * Return: if the list is not looped - 0
 * otherwise - the number of unique nodes in the list
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise, *hare;

tortoise = hare = head;
while (tortoise && hare && hare->next)
{
	tortoise = tortoise->next;
	hare = hare->next->next;
	if (tortoise == hare)
	{
		tortoise = head;
		break;
	}

}
if (!tortoise || !hare || !hare->next)
	return (NULL);
while (tortoise != hare)
{
	tortoise = tortoise->next;
	hare = hare->next;
}
return (hare);

}

