#include "main.h"
/**
 * cap_string - the funtion to capiterlize all word
 * @s: the string
 * Return: capitalized words
 */
char *cap_string(char *s)
{
	int a = 0;

	if (s[a] > 96 && s[a] < 123)
		s[a] -= 32;
	while (s[a] != '\0')
	{
		if (s[a] == '.' || s[a] == '!')
		{
			a++;
			if (s[a] == '\n' || s[a] == ' ')
				a++;
			if (s[a] > 96 && s[a] < 123)
				s[a] -= 32;
		}
		if ((s[a] == 32 || s[a] == '\t') || (s[a] == '\n')  || (s[a] == 34) ||
				(s[a] == 44) || (s[a] == 59) || (s[a] == 63) || (s[a] == 40) ||
				(s[a] == 41) || (s[a] == 123) || (s[a] == 125))
		{
			a++;
			if ((s[a] == ' ' || s[a] == '\t') || s[a] == '\n')
			{
				a++;
			}
			else if (s[a] > 96 && s[a] < 123)
			{
				s[a] -= 32;
			}
		}
		a++;
	}

	return (s);
}
