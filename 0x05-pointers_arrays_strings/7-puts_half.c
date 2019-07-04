#include "holberton.h"

/**
 * puts_half -  prints half of a string
 *
 * @str: value of the string
 *
 */

void puts_half(char *str)

{
	int i, j;

	i = 0;

	for (i = 0; str[i] != '\0'; i++)

	{
	}

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i + 1) / 2;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');

}
