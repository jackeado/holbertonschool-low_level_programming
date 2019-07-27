#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Sum of all its parameters
 * @separator: value of parameters
 * @n: value
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int  p;
	va_list num;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(num, n);

	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(num, int));
		if (separator != NULL && p != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(num);
	printf("\n");

}
