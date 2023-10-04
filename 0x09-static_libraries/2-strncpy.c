#include "main.h"
/**
 * _strncpy - the funtion to copy string
 * @dest: the destination of the copied string
 * @src: the source of the string
 * @n: the index to be copied
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
