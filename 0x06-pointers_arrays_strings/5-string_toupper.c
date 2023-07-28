#include "main.h"
/**
 * string_toupper - the funtiontion to make all string upper cse
 * @s: the string
 * Return: an upper case string
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] > 96 && s[a] != 123)
		{
			s[a] = (s[a] - 32);
		}
		a++;
	}
	return (s);

}
