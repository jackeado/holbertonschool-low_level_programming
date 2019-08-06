#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function add a node
 * @head: first node
 * @n: data of node
 *
 * Return: newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	int data;
	listint_t *newnode;

	data = n;
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (0);
	}
	newnode->n = data;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
