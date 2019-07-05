#include <stdio.h>
#include "holberton.h"

char *cap_string(char *n)

{
	int i, j;

	i = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == ' ' || n[i] == '\t' || n[i] == '\n' || n[i] == ',' ||
		    n[i] == ';' || n[i] == '!' || n[i] == '?' || n[i] == '"' || n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == '}')
		{
			j = 1;
		}
		else if((n[i] >= 97  && n[i] <= 122 && j == 1)||(n[0] >= 97 && n[0] <= 122))

		{
			n[i] = n[i] -= 32;
			j = 0;
		}
		else
		{
			j = 0;
		}
	}
	return (n);
}
