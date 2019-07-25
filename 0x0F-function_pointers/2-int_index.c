#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to serch through
 * @size: size of array
 * @cmp: function used to compare
 *
 * Return: first index for which cmp doesn't return 0, or -1
 */



int int_index(int *array, int size, int (*cmp)(int))

{
	int (*fun)(int);
	int pray;
	int nopray;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	fun = cmp;
	if (size <= 0)
	{
		return (-1);
	}
	for (pray = 0; pray < size; pray++)
	{
		nopray = fun(array[pray]);
		if (nopray != 0)
			return (pray);
	}
	return (-1);

}
