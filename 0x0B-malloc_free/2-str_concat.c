#include <stdlib.h>
/**
 * str_concat - fuction  concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: new pointer
 */


char *str_concat(char *s1, char *s2)

{
	char *c;
	int i, j, k = 0;
	int temp = 0, rec1 = 0, rec2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[rec1] != '\0')
	{
		rec1++;
	}
	while (s2[rec2] != '\0')
	{
		rec2++;
	}
	temp = rec1 + rec2 + 1;

	c = (char *) malloc(temp * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < rec1; i++)
	{
		c[i] = s1[i];
	}
	for (j = i; j <= temp; j++)
	{
		c[j] = s2[k];
			k++;
	}
	return (c);
}
