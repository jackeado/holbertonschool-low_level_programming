#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function add node in linked list
 * @head: pointer of head
 * @str: value or string
 *
 * Return: Pointer
 */


list_t *add_node(list_t **head, const char *str)

{
	list_t *newnode;
	unsigned int i = 0;

	if (str == NULL)
	return (NULL);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	for (; str[i] != '\0'; i++)
		;
	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
