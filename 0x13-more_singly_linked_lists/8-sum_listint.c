#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data
 * @head: argument of function
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
