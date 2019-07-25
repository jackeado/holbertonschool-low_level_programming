#include "3-calc.h"
#include <stdio.h>

/**
 *op_add - adds numbers a and b
 *@a: first number
 *@b: second number
 *
 *Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{

	return (a - b);
}

/**
 * op_mul - multliplies a and b
 * @a: first number
 * @b: second number
 *
 * Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide a and b
 * @a: first number
 * @b: second number
 *
 * Return: integer division of a by b
 */

int op_div(int a, int b)

{

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find remainder of the division of a by b
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);

}
