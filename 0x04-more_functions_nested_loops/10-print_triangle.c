#include "main.h"
/**
 * print_triangle - the triangle function
 * @size: the size in integer
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = size; a >= 1; a--)
		{
			for (b = 1; b < a; b++)
			{
				_putchar(' ');
			}
			for (c = b; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
