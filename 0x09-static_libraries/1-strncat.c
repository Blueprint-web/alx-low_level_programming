#include "main.h"
/**
 * _strncat - concat string using the n index
 * @dest: the first string
 * @src : the second string
 * @n: the index
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);

}
