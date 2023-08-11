#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - the malloc checker function
 * @b: the value
 * Return: the value
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	i = malloc(sizeof(b));
	if (i == NULL)
		return ((int *)98);
	*i = b;
	return (i);
}
