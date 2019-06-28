#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 *@n: value
 *
 *Return: void
 *
 */

void print_diagonal(int n)

{
	int p, b;

	for (p = 0 ; p < n ; p++)
	{
		for (b = 0 ; b < p ; b++)
		{
			_putchar (' ');
			}
	_putchar('\\');
	_putchar('\n');
	}
	if (n <= 0)
		_putchar ('\n');
}
