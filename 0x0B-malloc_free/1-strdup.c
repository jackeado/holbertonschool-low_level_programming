#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copy of the string given as a parameter
 * @str: string
 *
 * Return: new pointer
 */

char *_strdup(char *str)

{
	unsigned int  j, n;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n] != '\0'; n++)
	{
	}
	p = malloc(sizeof(char) * (n + 1));

	for (j = 0; j < (n + 1); j++)
	{
		p[j] = str[j];
	}

	return (p);
}
