#include "holberton.h"

/**
 * puts2 - function that prints and updates the value
 *
 * @str: integer value for the function
 */



void puts2(char *str)
{
	int pares;

	for (pares = 0; str[pares] != '\0'; pares++)
	{
		if (pares % 2 == 0)
		{
			_putchar (str[pares]);
		}
	}
	_putchar('\n');
}
