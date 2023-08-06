#include <stdlib.h>
#include <stdio.h>
/**
 * main - the main code block
 * @argc: the count
 * @argv: the string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
