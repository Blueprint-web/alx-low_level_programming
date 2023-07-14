#include <stdio.h>
/**
 * main - the main funtion
 *
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e')
		{
			a += 1;
		}
		else if (a == 'q')
		{
			a += 1;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
