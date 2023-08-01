#include "main.h"
/**
 * _memset - funtion that puts in constant bytes in an array
 * @s: the pointer to array
 * @b: the character
 * @n: the number of array to place the character
 * Return: the constant bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
