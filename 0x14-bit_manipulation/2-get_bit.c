#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: argument
 * @index: argument
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)

{
	if (index > 64)
	{
		return (-1);
	}
	n >>= index;
	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
