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
	int  b;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (b[s] == c)
			return (s + b);
	}
	return(s + b);
}
