#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))

{
	void (*fun)(char *);
	if (name == NULL || f == NULL)
		return;
	fun = f;
	fun(name);

}
