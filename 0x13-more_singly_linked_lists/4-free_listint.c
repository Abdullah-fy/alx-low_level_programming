#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 *
 * @head: pointer to the head
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *this_node;

	while (head)
	{
		this_node = head;
		head = head->next;
		free(this_node);
	}
}
