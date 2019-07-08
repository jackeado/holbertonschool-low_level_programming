#include "holberton.h"


char *_strchr(char *s, char c)

{
	unsigned b;

	for(b = 0; s[b] != '\0'; b++)
	{
		if (b[s] == c)
			break;
	}
	return (s + b);
}
