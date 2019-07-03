#include "holberton.h"
#include <stdio.h>


void print_array(int *a, int n)

{
	int alt;
	for(alt = 0; alt < n; alt++)
		{
			if(alt < n)
				printf("%d, ", a[alt]);
		}	
	putchar('\n');
}
