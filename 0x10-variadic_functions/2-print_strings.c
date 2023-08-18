#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - the variadic function to print strings
 * @separator: the separator string
 * @n: the number of argument
 * Return: null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list var;
	char *ptr;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(var, char*);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(var);
}
