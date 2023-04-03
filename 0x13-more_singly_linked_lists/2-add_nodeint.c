#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 *
 * @head: pointer to head
 * @n: data in node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *ptr_node;

	if (!head || !*head)
	{
		return (NULL);
	}

	ptr_node = malloc(sizeof(listint_t));

	ptr_node->n = n;
	ptr_node->next = *head;
	*head = ptr_node;

	return (ptr_node);
}
