#include "holberton.h"
#include <stdio.h>
#include <string.h>


/**
 * _memset - fills the first n bytes
 * @n:  bytes of the memory
 * @s: memory area
 * @b: constant byte
 *
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int buf;

	for (buf = 0; buf < n; buf++)
	{
		s[buf] = b;
	}
	return (s);
}
