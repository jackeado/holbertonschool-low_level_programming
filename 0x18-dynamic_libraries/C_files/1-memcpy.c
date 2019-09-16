#include "holberton.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: value  memory area
 * @n: value for bytes
 * @src: value
 *
 *Return: dest
 */



char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);

}
