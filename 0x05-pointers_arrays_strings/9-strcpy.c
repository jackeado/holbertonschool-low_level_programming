#include "holberton.h"

/**
 * _strcpy  - function taht print n elements
 *
 * @src: array source
 * @dest: array destination
 *
 * Return: valio of a char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
			}
	dest[i] = '\0';
	return (dest);
}
