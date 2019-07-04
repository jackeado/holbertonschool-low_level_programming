#include "holberton.h"

/**
 * rev_string  - function that reverse string
 * @s: string
 *   (* a blank line
 *
 */

void rev_string(char *s)

{
	int n, c;
	char  buf[500];

	n = 0;
	c = 0;

	while (s[n] != '\0')
	{
		buf[n] = s[n];
			   n++;
	}
	n = n - 1;
	while (n >= 0)
	{
		s[n] = buf[c];
		n--;
		c++;
	}
}
