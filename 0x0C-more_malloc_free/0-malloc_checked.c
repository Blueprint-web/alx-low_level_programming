#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - the malloc checker function
 * @b: the value
 * Return: the value
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
