#include "holberton.h"
#include <stdio.h>

/**
 * *string_toupper - function that reverse string
 * @j: string
 *
 *Return: converted char
 */


char *string_toupper(char *j)

{
	int i = 0;

	for (i = 0; j[i] != 0; i++)
	{
		if (j[i] >= 97 && j[i] <= 122)
		{
			j[i] -= 32;
		}
	}
	return (j);
}
