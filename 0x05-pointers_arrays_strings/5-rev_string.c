#include "main.h"
/**
 * rev_string - the string reverse
 * @s: the value
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char str = s[0];

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		str = s[j];
		s[j] = s[i];
		s[i] = str;
	}
}
