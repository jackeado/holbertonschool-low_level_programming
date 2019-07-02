#include "holberton.h"

/**
 * _puts -  prints a string
 *
 * @str:  variable for string
 * Return: Void
 */


void _puts(char *str)

{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		_putchar (str[p]);
	}
	_putchar('\n');

}
