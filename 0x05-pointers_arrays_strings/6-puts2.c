#include "main.h"
/**
 * puts2 - the puts funtion
 * @str: the value
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j+=2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
