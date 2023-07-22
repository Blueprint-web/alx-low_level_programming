#include "main.h"
/**
 * print_line - funtion to print line
 * @n: the number of line
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
