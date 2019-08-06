#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: argument
 *
 * Return: free memory
 */

void free_listint(listint_t *head)
{
	listint_t *lib = NULL;

	while (head != NULL)
	{
		lib = head;
		head = head->next;
		free(lib);
	}
}
