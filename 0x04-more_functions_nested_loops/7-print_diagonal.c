#include "main.h"
/**
 * print_diagonal - the diagonal function
 * @n: the size
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

}
