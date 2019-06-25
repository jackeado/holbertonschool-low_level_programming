#include "holberton.h"
/**
 *print_alphabet_x10 - prints the alphabet from a to z
 *
 *Return: 0
 */
void print_alphabet_x10(void)
{
	char  v, p;

	v = 'a';

	for (p = 0; p < 10; p++)
	{
		while (v <= 'z')
		{
			_putchar(p);
			p++;
		}
		_putchar('\n');
		v = 'a';
	}
}
