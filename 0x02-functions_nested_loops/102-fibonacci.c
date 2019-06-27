#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;

	long uno = 0;
	long dos = 1;
	long sum = 1;

	do {
		printf("%li, ", sum);
		uno  = dos;
		dos = sum;
		sum = uno + dos;
		i++;

	} while (i < 49);

	printf("%li\n", sum);

	return (0);
}
