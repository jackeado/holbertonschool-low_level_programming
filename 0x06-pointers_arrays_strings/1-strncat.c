#include "holberton.h"

/**
 * _strncat - function concatenates two strings
 *
 * @dest: value for string
 * @src: value for string
 * @n: value of char
 *
 * return: dest string
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
			j++;
	}

	return (dest);
}
