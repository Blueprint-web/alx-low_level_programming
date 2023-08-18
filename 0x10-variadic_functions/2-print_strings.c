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

	if (separator == NULL)
		return;
	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(var, char*);
		if (ptr == NULL)
			printf("(nil)");
		if (i > 0 && i < n)
		{
			printf("%s", separator);
		}
		printf("%s", ptr);
	}
	putchar('\n');
	va_end(var);
}
