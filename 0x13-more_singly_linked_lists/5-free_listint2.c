#include <stdlib.h>
#include "lists.h"


void free_listint2(listint_t **head)
{
	listint_t *lib = NULL;
    
	if (*head == NULL)
		return;
    
	while (*head)
	{
		lib = (*head)->next;
		free(lib);
		*head = lib;
	}
}
