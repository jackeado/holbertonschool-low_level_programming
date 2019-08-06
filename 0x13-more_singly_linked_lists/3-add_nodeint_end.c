#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the final of the list
 * @head: incial node
 * @n: argument of node
 *
 * Return: final node
 */



listint_t *add_nodeint_end(listint_t **head, const int n)

{
	int data;
	listint_t *endnode;
	listint_t *last = *head;

	data = n;
	endnode = malloc(sizeof(listint_t));

	if (endnode == NULL)
	{
		return (0);
	}
	endnode->n = data;
	endnode->next = NULL;
	if (*head == NULL)
	{
		*head = endnode;
		return (0);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = endnode;
	return (endnode);

}
