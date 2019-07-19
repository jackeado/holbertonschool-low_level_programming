#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: large of string
 *
 * Return: new pointer
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int  i, j, p, b;
	char  *conc;

	if (s1 == NULL)
	{
		s1 = "";
	}
	for (i = 0; i[s1] != '\0'; i++)
	{
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	for (j = 0; j[s2] != '\0'; j++)
	{
	}
	conc = malloc((n + i + 1) * sizeof(char));

	if (conc == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < i; p++)
	{
		conc[p] = s1[p];
	}
	for (b = 0; b < n && s2[b] != '\0'; b++, p++)
	{
		conc[p] = s2[b];
	}
	conc[p] = '\0';

	return (conc);
}
