#include "main.h"
/**
 * reverse_array - funtion to reverse an array
 * @a: the int array
 * @n: the index to reverse
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (c = 0; c < n--; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}

}
