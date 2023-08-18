#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list var;
	int j = 0, c, i, f, s;

	while (format[i] != '\0')
	{
		if (*format == 'c')
		{
			c = va_arg(var, char);
			printf("%c", c);
		}
		if (*format == 'i')
		{

}
