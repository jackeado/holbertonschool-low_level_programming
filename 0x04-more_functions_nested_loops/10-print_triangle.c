#include "holberton.h"

/**
 * print_triangle -  triangle in hash
 * @tr: size  triangle
 *
 * Return: void.
 *
 */

void print_triangle(int tr)

{
	int p, col, tag;

		for (p = 0 ; p < tr ; p++)
		{
			for (col = 2 ; col <= (tr - p); col++)
			{
				_putchar (' ');
			}
			for (tag = 0 ; tag <= p ; tag++)
			{
			_putchar('#');
			}
			_putchar ('\n');
		}
	if (tr <= 0)
	{
		_putchar('\n');
			}

}
