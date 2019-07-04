#include "holberton.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: string number 1
 * @s2: string number 2
 *
 * Return: j
 */


int _strcmp(char *s1, char *s2)

{
	int i, j;

	j = 0;

	for (i = 0; s1[i] != '\0' &&  s2[i] != '\0'; i++)
	{
		j = s1[i] - s2[i];
		break;
	}
	if (j != 0)
	{
	}
	return (j);
}
