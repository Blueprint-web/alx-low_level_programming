#include "main.h"
/**
 * factorial - the factoria funtion
 * @n: the value
 * Return: fatorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
