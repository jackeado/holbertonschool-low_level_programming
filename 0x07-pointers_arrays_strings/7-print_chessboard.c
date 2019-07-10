#include "holberton.h"

/**
 * print_chessboard - prints a chess board
 * @a: pointer to an 8 by 8 array of characters
 *
 * Return: void
 */


void print_chessboard(char (*a)[8])

{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}


}
