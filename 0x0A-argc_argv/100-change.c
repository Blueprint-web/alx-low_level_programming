#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main code block
 * @argc: the count
 * @argv: the string
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i[5] = {25, 10, 5, 2, 1};
	int j, count, value;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	count = 0;
	if (value < 0)
	{
		printf("0\n");
		return (1);
	}
	for (j = 0; j < 5 && value >= 0; j++)
	{
		while (value >= i[j])
		{
			count++;
			value -= i[j];
		}
	}
	printf("%d\n", count);
	return (0);
}
