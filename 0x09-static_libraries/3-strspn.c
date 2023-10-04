#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the substring
 * @accept: value to compare from
 * Return: value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value;

	value = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				break;
			}
			else if (accept[n + 1] == '\0')
			{
				return (value);
			}
		}
	}
	return (value);
}
