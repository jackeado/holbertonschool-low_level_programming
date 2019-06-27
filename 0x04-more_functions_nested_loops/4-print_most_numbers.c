#include "holberton.h"

/**
 * print_numbers - prints 0123456789\n
 * @p - numbers of 0 to 9
 * Return: void
 */


void print_numbers(void)

{
	int p;

	for (p = '0'; p <= '9'; p++)
		if (p == '2' || p == '4')
		{
			continue;
		}
	_putchar(p + '0');
	_putchar('\n');

}
