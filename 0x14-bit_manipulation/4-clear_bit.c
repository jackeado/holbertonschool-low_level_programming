#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number of arguments
 * @index: index
 *
 * Return: int
 */



int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned int aux;

	if (index > 64)
		return (-1);
	aux = 1 << index;
	*n = *n & aux;
	return (1);

}
