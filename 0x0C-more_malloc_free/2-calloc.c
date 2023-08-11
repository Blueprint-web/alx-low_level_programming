#include "main.h"
#include <stdlib.h>
/**
 * _calloc - the calloc funtion
 * @nmemb: the first argument
 * @size: the size
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p = 0;

	p = malloc(sizeof(nmemb) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
