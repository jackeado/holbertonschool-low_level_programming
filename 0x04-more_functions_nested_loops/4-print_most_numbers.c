#include "holberton.h"

/**
 * print_most_numbers - prints 01356789\n
 *
 * Return: void
 */


void print_most_numbers(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		if (!(b == '2' || b == '4'))
			_putchar(b);
	}
	_putchar('\n');
}
