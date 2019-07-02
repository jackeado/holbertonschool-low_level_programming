#include "holberton.h"

void rev_string(char *s)

{
	int k, p, c, x;
	char g[1000];
	x = 0;
	int perra = 0;
	
	for (k = 0; s[k] != '\0'; k++)
	{
		perra++;
	}

	for (p = perra - 1; p >= 0; p--)
	
	{
		g[x] = s[p];
		x++;
	}
	for (c = 0; s[c] != '\0'; c++)
		s[c] = g[c];
	{
	}
}
