#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a list
 * @head: pointer to the beginning
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
