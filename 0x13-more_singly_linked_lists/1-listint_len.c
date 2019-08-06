#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function returns the numbers elements in a linked list
 * @h: argument of structur
 *
 * Return: Numbers of nodes
 */

size_t listint_len(const listint_t *h)

{
	size_t var = 0;

	while (h != NULL)
	{
	h = h->next;
	var++;
	}
	return (var);
}
