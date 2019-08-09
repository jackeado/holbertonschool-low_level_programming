#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: argument of function
 * @index: index
 *
 * Return: int
 */


int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned int aux;

	if (index > 64)
		return (-1);
	aux = 1 << index;
	*n = *n | aux;
	return (1);

}
