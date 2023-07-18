#include "main.h"
/**
 * print_sign - for printing signs
 * @n: the input value
 * Return: 1 if n is > 0, 0 if n == 0 and -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		_putchar('-');
		return (-1);
}
