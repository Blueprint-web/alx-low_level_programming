#include <stdio.h>
/**
 * main - the begining of the code block
 *
 * Return: return 0
 */
int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
