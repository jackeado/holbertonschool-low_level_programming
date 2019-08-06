#include <stdlib.h>
#include "lists.h"


/**
 * free_listint2 - function free memory
 * @head: value of head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *lib;

	if (*head == NULL)
		return;

	while (*head)
	{
		lib = (*head)->next;
		free(*head);
		*head = lib;
	}
}
