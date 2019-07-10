#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack:  string
 * @needle: substring
 *
 * Return: Null
 */



char *_strstr(char *haystack, char *needle)

{
	while (*haystack != '\0')
	{
		char *c = haystack;
		char *v = needle;

		while (*v == *haystack && *v != '\0' && *haystack != '\0')
		{
			haystack++;
			v++;
		}
		if (*v == '\0')
			return (c);
		haystack = c + 1;
	}
	return (0);
}
