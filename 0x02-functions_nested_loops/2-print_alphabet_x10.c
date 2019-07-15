#include "holberton.h"
/**
 *print_alphabet_x10 - prints the alphabet from a to z
 *
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int v;

	char p;

	for (v = 0; v < 10; v++)
	{
		for (p = 'a'; p <= 'z'; p++)
		{
			_putchar (p);
		}
		_putchar('\n');
	}
}
