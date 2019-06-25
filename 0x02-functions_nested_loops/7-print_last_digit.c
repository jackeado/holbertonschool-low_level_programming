#include "holberton.h"

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
		n = n * -1;
	}
	last = n % 10;
	_putchar (last + '0');
	return (last);
	return(n);
}
