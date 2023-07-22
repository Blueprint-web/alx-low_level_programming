#include "main.h"
/**
 * print_most_numbers - to print most numbers and excape some
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
		{
			a += 1;
		}
		_putchar(a);
	}
	_putchar('\n');
}
