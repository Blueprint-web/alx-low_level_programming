#include "main.h"
/**
 * _strlen - the string lenth funtion
 * @s: the value
 * Return: the lenth
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
