#include "main.h"
/**
 * _pow_recursion - the raise to power function
 * @x: the first value
 * @y: the second value
 * Return: the power
 */
int _pow_recursion(int x, int y)
{
	int power = 0;

	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	power = x * _pow_recursion(x, y - 1);
	return (power);
}
