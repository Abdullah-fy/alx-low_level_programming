#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: pointer to the head
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;


	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	}

	return (count);
}
