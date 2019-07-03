#include "holberton.h"
#include <stdio.h>

/**
 * print_array - an array of integers, followed by a new line.
 *
 * @n: value for array
 * @a: Pointer for the  string
 *
 */




void print_array(int *a, int n)

{
	int alt;

	for (alt = 0; alt < n; alt++)
	{
		printf("%d", a[alt]);

		if (alt != n - 1)
			printf(", ");
	}
	putchar('\n');
}
