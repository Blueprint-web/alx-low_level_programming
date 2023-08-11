#include "main.h"
#include <stdlib.h>
/**
 * array_range - the malloc array function
 * @min: the min range
 * @max: the max range
 * Return: the range
 */
int *array_range(int min, int max)
{
	int *p;
	int size = max - min;

	if (min > max)
		return (NULL);
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	return (p);
}
