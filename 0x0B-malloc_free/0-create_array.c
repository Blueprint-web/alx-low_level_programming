#include "main.h"
#include <stdlib.h>
/**
 * create_array - the funtion to create array
 * @size: the size of array
 * @c: the character to print
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
