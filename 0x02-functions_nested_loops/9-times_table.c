#include "holberton.h"
/**
 * times_table - prints the 9 times table.
 *
 * Return: void
 *
 */
void times_table(void)
{
	int q, w, c;

	for (q = 0; q <= 9; q++)
	{
		for (w = 0; w <= 9; w++)
		{
			c = (q * w);
			if (w != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (c < 10 && w != 0)
			{
				_putchar(' ');
				_putchar((c % 10) + '0');
			}
			else
				_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
