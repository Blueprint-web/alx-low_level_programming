#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - the string concant funtion
 * @s1: the first string
 * @s2: the second string
 * @n: the concart size
 * Return: the string value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0;

	str = malloc(sizeof(s1) + n);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
