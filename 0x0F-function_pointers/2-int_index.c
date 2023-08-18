#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - search index to find and array value
 * @array: value to search
 * @size: the size of the array to search through
 * @cmp: the pointer to compare
 * Return: the index the value was found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
