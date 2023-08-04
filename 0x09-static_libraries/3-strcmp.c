#include "main.h"
/**
 * _strcmp - the funtion to compare two string
 * @s1: the first value
 * @s2: the second value
 * Return: the value in negative or positive
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
