#include "main.h"
/**
 * swap_int - the swap function
 * @a: the first value
 * @b: the second value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int e;

	e = *b;
	*b = *a;
	*a = e;
}
