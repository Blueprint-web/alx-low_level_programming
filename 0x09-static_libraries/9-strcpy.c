#include "main.h"
/**
 * _strcpy - funtion to copy string
 * @dest: the destination
 * @src: the source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
