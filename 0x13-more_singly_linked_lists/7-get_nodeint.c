#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: node head
 * @index: node of a list
 *
 * Return: head
 */




listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
		i++;
	}
	return (head);
}
