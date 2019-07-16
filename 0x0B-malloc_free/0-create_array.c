#include <stdlib.h>

/**
 * create_array - array of chars, and initializes
 * @size: size of string
 * @c: string
 *
 * Return: s
 */

char *create_array(unsigned int size, char c)

{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		  i++;
	}
	s[i] = '\0';
	return (s);
	free(s);
}

