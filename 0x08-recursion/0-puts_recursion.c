#include "main.h"
/**
 * _puts_recursion - the print sring recursion function
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
		i++;
	}
	else
		_putchar('\n');
}
