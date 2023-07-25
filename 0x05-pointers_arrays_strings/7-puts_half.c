#include "main.h"
/**
 * puts_half - the put half funtion
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = i / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
