#include "main.h"
/**
 * more_numbers - funtion to print numbers time 10
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar('1');
			}
			_putchar((b % 10) + 48);
		}
		_putchar('\n');
	}
}
