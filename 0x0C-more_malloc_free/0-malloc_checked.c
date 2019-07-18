#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked  - allocates memory using malloc
 * @b: value of variable
 * Return: pointer.
 */


void *malloc_checked(unsigned int b)

{
<<<<<<< HEAD
	void *c;
=======
	int *c;
>>>>>>> 722473d600a68cfe7b2ea179530a3b54973bf7bf

	c = malloc(b);
	if (c == NULL)
	{
	exit(98);
	return (NULL);
	}
	return (c);
}
