#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 **/
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	int count = 0;
	int count2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		count += 1;
	for (j = 0; s2[j] != '\0'; j++)
		count2 += 1;
	count = count + count2;
	s = malloc(sizeof(char) * count + 1);
	if (s == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
	{
		s[k] = s1[k];
	}
	for (l = 0; s2[l] != '\0'; l++, k++)
	{
		s[k] = s2[l];
	}
	return (s);
}
