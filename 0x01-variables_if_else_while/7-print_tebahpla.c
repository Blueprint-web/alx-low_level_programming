#include <stdio.h>
/**
 * main - the main code block
 *
 * Return: 0 success
 */
int main(void)
{
	char a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
