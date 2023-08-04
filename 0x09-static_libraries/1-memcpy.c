#include "main.h"
/**
 * _memcpy - funtion to copy memory of n bytes of src to dest
 * @dest: the destination for the copied memory
 * @src: the copied string
 * @n: the amount of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
