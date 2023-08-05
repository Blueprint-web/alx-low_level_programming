#include <stdio.h>
/**
 * main - the main function
 * @argc: the argument numbers
 * @argv: the string
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 0; i < argc; i++)
	{
		*argv = argv[i];
		sum = i;
	}
		printf("%d\n", sum);
	return (0);
}
