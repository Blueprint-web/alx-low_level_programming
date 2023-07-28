#include "main.h"
/**
 * leet - the funtion that changes aeotil to letters
 * @s: the string
 * Return: the string and change aeotil to lettrs if found
 */
char *leet(char *s)
{
	int a, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

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
