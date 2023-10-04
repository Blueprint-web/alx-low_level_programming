#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_number - checks if a given char is number or not
 * @str: char to be checked
 * Return: 1, if its a number, else 0
 */
int check_number(char *str)
{
	int i, num, lenght;

	i = 0;
	num = 0;
	lenght = strlen(str);
	while (i < lenght)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (str[i] - '0');
		}
		i++;
	}
	return (num);
}
/**
 * main - add positive numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of addition or 1
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	result = 0;
	for (i = 1; i < argc; i++)
	{
		j = check_number(argv[i]);
		if (j == -1)
		{
			printf("Error\n");
			return (1);
		}
		result += j;
	}
	printf("%d\n", result);
	return (0);
}
