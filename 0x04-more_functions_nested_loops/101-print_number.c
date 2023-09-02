#include "main.h"

void print_number(int n)
{
	if (n > 0 && n <= 9)
	{
		_putchar('0' + n);
	} else if (n > 9 && n <= 99)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	} else if (n < 0)
	{
		_putchar('-');
		n = -n;
	} else
	{
		n = (n / 10) + 48;
		_putchar('0' + n % 10);
	}
	_putchar('\n');
}
