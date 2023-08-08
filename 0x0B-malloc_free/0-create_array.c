#include "main.h"
#include <stdlib.h>
/**
 * create_array - the array creater
 * @size: the size
 * @c: the caracter to fill the array
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size <= 0)
		return (NULL);
	s = ((char *) malloc(sizeof(char) * size + 1));
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
