#include "main.h"
/**
 * print_number - the funtion that print number using putchar
 * @n: the integer
 * Return: void
 */
void print_number(int n)
{
	int n1;

	n1 = n;
	if (n < 0)
	{
		_putchar('-');
		n = -n1;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
