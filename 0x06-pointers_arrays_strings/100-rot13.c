#include "main.h"
/**
 * rot13 - the funtion that alternate any alphabet to the next 13 letter
 * @s: the string
 * Return: the changed alphabeth
 */
char *rot13(char *s)
{
	int a, b;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; s1[b] != '\0'; b++)
		{
			if (s[a] == s1[b])
			{
				s[a] = s2[b];
				break;
			}
		}
	}
	return (s);
}
