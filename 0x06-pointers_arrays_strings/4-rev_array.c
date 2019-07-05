#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - function reverse string
 * @a: string
 * @n: number of elemnts
 *
 * Return: void
 */


void reverse_array(int *a, int n)

{
	int i, j;
	int buf[5000];
	int p = n;

	i = 0;
	j = 0;

	while (i < n)
	{
		buf[i] = a[i];
			i++;
	}
	p--;
	while (p >= 0)
	{
		a[p] = buf[j];
		p--;
		j++;
	}
}
