#include "main.h"
/**
 * print_last_digit - to print last digit
 * @j: the input
 * Return: void
 */
int print_last_digit(int j)
{
	int last_num;

	last_num = j % 10;
	if (last_num < 0)
	{
		last_num = last_num * -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}
