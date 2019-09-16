#include "holberton.h"

/**
 * _strncpy - function copy a string
 *
 * @dest: value for string
 * @src: value for string
 * @n: value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
