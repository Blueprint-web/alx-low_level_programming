#include "main.h"
/**
 * factorial - the factorial function
 * @n: the value
 * Return: the factorial
 */
int factorial(int n)
{
	int fact = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	fact += n * factorial(n - 1);
	return (fact);
}
