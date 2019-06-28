#include <stdio.h>

/**
 * main - Prints prime factor
 *
 *
 * Return: Always return 0
 */
int  main(void)

{ 
	long int p, j;
	
	p = 612852475143;
	
	for (j = 2; j < p; j++)
		if (p % j == 0)
		{			
			p = p / j;

			j = 1;
		}
	printf("%lu\n", p);

	return (0);
}
