#include "main.h"
/**
 * _islower - the funtion that checks for upper and lower case
 * @c: the input
 * Return: 1  if lower
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	return (0);
}
