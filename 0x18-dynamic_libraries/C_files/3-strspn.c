#include "holberton.h"

/**
 * _strspn - gets lengthof a prefix substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s in accept
 */



unsigned int _strspn(char *s, char *accept)

{
	unsigned int j, p;

	for (j = 0; s[j]; j++)
	{
		for (p = 0; accept[p]; p++)
		{

			if (s[j] == accept[p])
				break;
		}
		if (!accept[p])
			break;

	}
	return (j);
}
