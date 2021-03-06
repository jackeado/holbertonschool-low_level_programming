#include "holberton.h"
/**
 * _strcat -  function that concatenates two strings
 *
 * @dest:value of string
 * @src: value of string
 *
 *Return: dest
 */


char *_strcat(char *dest, char *src)

{
	int p, n;

	p = 0;
	n = 0;

	while (dest[p] != '\0')
	{
	p++;
	}

	while (src[n] != '\0')
	{
		dest[p + n] = src[n];
		n++;
	}

	dest[p + n] = 0;
	return (dest);
}
