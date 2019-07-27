#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum of all its parameters
 * @n: value of parameters
 *
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)

{
	unsigned int sum, p;
	va_list num;

	sum = 0;
	if (n == 0)
	{
	return (0);
	}
	va_start(num, n);

	for (p = 0; p < n; p++)
	{
		sum += va_arg(num, int);
	}
	va_end(num);

	return (sum);
}
