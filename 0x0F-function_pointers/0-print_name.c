#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - using function pointer to print name
 * @name: the string
 * @f: the funtion to point to
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
