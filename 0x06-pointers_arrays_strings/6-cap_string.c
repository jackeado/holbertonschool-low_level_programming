#include "holberton.h"
#include <stdio.h>
/**
 * *cap_string - capitalizes all words of a string.
 * @n: The function's parameter
 *
 * Return: n.
 */
char *cap_string(char *n)
{
	int i;
	int p = 0;
	for (i = 0; n[i] != 0; i++)
	{
		if (n[i] == ' ' || n[i] == '\t' || n[i] == '\n'
|| n[i] == ',' || n[i] == ';' || n[i] == '.'
|| n[i] == '!' || n[i] == '?' || n[i] == '"'
|| n[i] == '(' || n[i] == ')' || n[i] == '{'
		    || n[i] == '}')
		{
			p = 1;
		}
		else if ((n[i] >= 97 && n[i] <= 122 && p == 1) || (n[0] >= 97 && n[0] <= 122))
		{
			n[i] = n[i] - 32;
			p = 0;
		}
		else
		{
			p = 0;
		}
	}
	return (n);
}
