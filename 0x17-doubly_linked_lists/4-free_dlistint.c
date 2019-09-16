#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the beginning of the linked list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodenext;

	while (head)
	{
		nodenext = head;
		head = head->next;
		free(nodenext);
	}
}
