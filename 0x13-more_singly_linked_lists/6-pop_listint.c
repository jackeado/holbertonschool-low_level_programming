#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a list
 * @head: argument at function
 *
 * Return: temp
 */


int pop_listint(listint_t **head)

{
	int temp = 0;
	listint_t *deletenode;

	if (*head)
	{

		temp = (*head)->n;
		deletenode = (*head)->next;
		free(*head);
		*head = deletenode;
	}
	return (temp);
}
