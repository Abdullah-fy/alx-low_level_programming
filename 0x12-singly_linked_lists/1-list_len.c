/*
 * File: 1-list_len.c
 * Author : Solomon Kassa
 */

#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns then number of elements in a list.
 * @s: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *s)
{
	size_t mynode;

	for (mynode = 0 ; s != NULL ; mynode++)
	{
		s = s->next;
	}

	return (mynode);
}
