#include "holberton.h"

/**
 * rev_string  - function that reverse strin
 * @dest: array destination
 * @src: array source
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src [i];
			}
	dest[i] = '\0';
	return (dest);
}
