#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{
	int i, j;
	int count = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		count += 1;
	}
	s = malloc(sizeof(char) * count + 1);
	for (j = 0; str[j] != '\0'; j++)
		s[j] = str[j];
	return (s);

}
