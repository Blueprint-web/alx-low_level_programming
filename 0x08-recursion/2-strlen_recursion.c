#include "main.h"
/**
 * _strlen_recursion - the lenght function
 * @s: the string
 * Return: the lenght
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
