#include <stdio.h>
/**
 * main - the main code block
 *
 * Return: 0
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
