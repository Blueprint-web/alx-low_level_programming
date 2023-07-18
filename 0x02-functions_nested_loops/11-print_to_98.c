#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - takes input and loop till its 98
 * @n: the input
 * Return: void
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
	{
		printf("%i\n", n);
	}
}
