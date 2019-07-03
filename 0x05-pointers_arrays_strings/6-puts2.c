#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string (par)
 * @*str: 
 *
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
