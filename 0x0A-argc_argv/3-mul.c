#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply 2 number`s
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int first, second, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	first = atoi(argv[1]);
	second = atoi(argv[2]);
	result = first * second;
	printf("%d\n", result);
	return (0);
}
