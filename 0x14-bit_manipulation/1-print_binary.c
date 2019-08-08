#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: argument of function
 *
 * Return: void
 */


void print_binary(unsigned long int n)

{
	unsigned long int index = 2;
	int cont = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	while (index <= n && cont < 62)
	{
		if (index <<= 1)
			cont++;
	}
	if (cont != 62)
		index >>= 1;
	while (index != 0)
	{
		if ((index & n) == 0)
		{
			_putchar('0');
			cont++;
		}
		else
		{
			_putchar('1');
			cont++;
		}
		index >>= 1;
	}
}
