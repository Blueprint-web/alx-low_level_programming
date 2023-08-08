#include "main.h"
#include <stdlib.h>
/**
 * _strdup - the string to output
 * @str: the string
 * Return: str
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *s;

	if (str == NULL)
		return (NULL);
	if (str[0] == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		s = malloc(sizeof(char) * i);
		i++;
	}
	if (s == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		s[j] = str[j];
	return (s);
}
