#include "main.h"

int _atoi(char *s)
{
	int i, k = 0;
	if (*s == '0')
	{
		return (0);
	}
	else
	{
		while (s[k] != '\0')
		{
			for (i = 0; i < 10; i++)
			{
				if (s[k] == i + '0')
				{
					return(i);
					k++;
				}
			}		
		}
	}
}
