#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Sum of all its parameters
 * @separator: value of parameters
 * @n: value
 *
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int cont, p;
	va_list num;
	char *c;

	cont = 0;
	va_start(num, n);

	if (n == 0)
	{
		return;
	}
	for (p = 0; p < n; p++)
	{
		c = va_arg(num, char *);
		if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
		if (separator == NULL)
		{
			continue;
		}
		else if (p < n - 1)
		{
			printf("%s", separator);
		}

	}
	va_end(num);
	printf("\n");

}
