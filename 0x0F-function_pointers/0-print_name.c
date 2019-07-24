#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of prints
 * @f: function to print with
 *
 * Return: void
 */




void print_name(char *name, void (*f)(char *))

{
	void (*fun)(char *);
	if (name == NULL || f == NULL)
		return;
	fun = f;
	fun(name);

}
