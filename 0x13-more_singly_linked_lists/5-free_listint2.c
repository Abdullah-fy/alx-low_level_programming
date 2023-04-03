#include "lists.h"

/**
 * free_listint2 - func that frees a listint_t list
 *
 * @head: pointer to pointer to the head
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
}
