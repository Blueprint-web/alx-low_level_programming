#include "main.h"
#include <stddef.h>
/**
 * _strchr - search for the first apearance of the character in c
 * @s: the string to search
 * @c: the character to search
 * Return: the character and the remaining if found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
