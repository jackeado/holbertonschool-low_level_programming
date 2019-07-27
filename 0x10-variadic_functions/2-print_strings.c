#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Sum of all its parameters
 * @separator: value of parameters
 * @n: value
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	char *c;
	va_list num;

	va_start(num, n);

	if (n == 0)
	{
		printf("\n");
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
