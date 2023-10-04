#include "main.h"
/**
 * _isdigit - checkes for degit
 * @c: the input
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
