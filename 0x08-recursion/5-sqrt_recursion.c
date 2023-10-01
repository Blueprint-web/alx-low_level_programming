#include "main.h"
/**
 * real_square_root - to get the actual square root,
 * @n: the value
 * @j: the counter
 * Return: the real square root
 */
int real_square_root(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	return (real_square_root(n, j + 1));
}
/**
 * _sqrt_recursion - the square root recursion
 * @n: the number to square
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (real_square_root(n, 0));
}
