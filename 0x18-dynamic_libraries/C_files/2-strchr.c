#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: value of the string
 * @c: value of string 2
 *
 * Return: char
 */



char *_strchr(char *s, char c)

{

	int p;

	for (p = 0; s[p] != 0; p++)
	{
		if (s[p] == c)
		{
			return (s + p);
		}
	}
		if (s[p] == c)
		{
			return (s + p);
		}
		else
		{
	return (0);
		}
}
