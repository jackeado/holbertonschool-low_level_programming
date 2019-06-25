#include "holberton.h"

/**
 * jack_bauer - prints every minute of the day starting from
 * 00.00  to 23.59
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int a, b, c, d;

	int g, h;

	for (g = 0; g < 23; g++)
	{
		for (h = 0; h <= 59; h++)
		{
			a = (g / 10) + '0';
			b = (g % 10) + '0';
			c = (h / 10) + '0';
			d = (h % 10) + '0';
			_putchar(a);
			_putchar(b);
			_putchar(c);
			_putchar(d);
			_putchar('\n');
		}
	}
}
