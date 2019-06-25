#include "holberton.h"
#include <stdio.h>
/**
 *print_alphabet - Uses the print_alphabet func
 *
 *Return: nothing
 */
void print_alphabet(void)
{
	int v;
	v = 'a';

	while (v <= 'z')

	{
		_putchar(v);
		v++;
	}
	_putchar('\n');
}
