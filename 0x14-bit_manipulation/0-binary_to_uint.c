#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary
 * @b: string of char
 *
 * Return: str
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int str = 0;
	int c = 0;
	int p = 0;


	if (b == NULL)
	{
		return (0);
	}

	while (b[c + 1] != '\0')
	{
		c++;
	}
	p = 1;
	while (c >= 0)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		str += (b[c] - '0') * p;
		p *= 2;
		c--;
	}
	return (str);
}
