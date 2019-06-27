#include "holberton.h"

/**
 * more_numbers - prints 01234567891011121314\n x10
 *@p - variable print
 *@l - variable print
 * Return: void
 */


void more_numbers(void)
{

	int p;

	int j;

	for (p = 0; p < 10; p++)

	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('0' + 1);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
