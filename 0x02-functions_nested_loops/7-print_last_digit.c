#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of number
 * @n: number to print last digit of
 *
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)

	{
		last = (n % 10) * -1;
	}
	else
	{
		last = n % 10;
	}
	_putchar (last + '0');
	return (last);
}
