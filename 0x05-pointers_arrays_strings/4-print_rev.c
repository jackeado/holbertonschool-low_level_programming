#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @s: variable for string
 * Return: Void
 */

void print_rev(char *s)

{
	int rev, k;

	for (rev = 0; s[rev] != '\0'; rev++)
	{
	}
	for (k = rev - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');

}
