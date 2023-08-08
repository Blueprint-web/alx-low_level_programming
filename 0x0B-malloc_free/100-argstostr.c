#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int i;
	char **s;

	s = malloc(sizeof(char *) * ac);
	for (i = 0; i < ac; i++)
	{
		s[i] = av[i];
	}
	return (s[ac]);
}
