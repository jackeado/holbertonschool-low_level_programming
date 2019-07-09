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

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s);

}
