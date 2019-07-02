#include "holberton.h"
#include <stdio.h>


/**
 * swap_int - swaps the values of two integers.
 * @a: first integer for swap
 * @b: second integer for swap
 *
 * Return: void.
 */

void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
