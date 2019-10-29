#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: list of ints
 * @size: size of the list
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min;

	if (!array)
		return;
	if (size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		swap(&array[min], &array[i]);
		print_array(array, size);
	}

}
/**
 * swap - swaps a two ints
 * @x: value one
 * @y: value two
 *
 * Return: void
 */

void swap(int *x, int *y)
{
	int tmp = *x;

	*x = *y;
	*y = tmp;

}
