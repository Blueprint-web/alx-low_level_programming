#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - print array of size t
 * @array: the array;
 * @size: the size of array
 * @action: the funtion to pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
