#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main code function
 * @argc: the argument counter
 * @argv: the argument vector
 * Return: the value
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	op = (char *) main;
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", op[i]);
			break;
		}
		printf("%02hhx ", op[i]);
	}
	return (0);
}
