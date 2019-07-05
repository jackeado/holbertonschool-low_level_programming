#include "holberton.h"
/**
 * *leet - encodes into 1337
 * @sp: translation
 *
 * Return: encode
 */
char *leet(char *sp)

{
	int i;
	int j;
	char  le[5][2] = {{'a', 'A'}, {'e', 'E'},
			      {'o', 'O'}, {'t', 'T'}, {'l', 'L'}};
	char pa[] = {'4', '3', '0', '7', '1'};

	for (j = 0; sp[j] != '\0'; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (le[i][0] == sp[j] || le[i][1] == sp[j])
			{
				sp[j] = pa[i];
			}
		}
	}
	return (sp);
}
