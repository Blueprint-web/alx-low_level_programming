#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - the variadic function to print numbers
 * @separator: the separator string
 * @n: the number of argument
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(var, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(var);
}