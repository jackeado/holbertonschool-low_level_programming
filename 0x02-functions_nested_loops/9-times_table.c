#include <stdio.h>
#include "holberton.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int fila, col;

	int un, dec;

	int multi;

		for (fila = 0; fila <= 9; fila++)
		{
			for (col = 0; col <= 9; col++)
			{
				multi = fila * col;
			if (multi >= 10)
			{
				un = multi  % 10;
				dec = multi / 10;

				_putchar(' ');
				_putchar(dec + '0');
				_putchar(un + '0');
			}
			else
			{
				if (col != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(multi +'0');

			}
			if (col != 9)
			{
				_putchar(',');
			}
			if (col == 9)
			{
				_putchar('\n');
			}
		}
	col = 0;
		}
}

