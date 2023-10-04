#include "main.h"
/**
 * _isupper - the upper case checker
 * @c: the input value
 * Return: 1 if upper else return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
