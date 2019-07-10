#include "holberton.h"
#include <stdlib.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)

{
	unsigned int q, w;

	q = 0;
	while (s[q])
	{
		w = 0;
		while (accept[w])
		{
			if (s[q] == accept[w])
				return (s + q);
			w++;
		}
		q++;
	}
	return (NULL);
}
