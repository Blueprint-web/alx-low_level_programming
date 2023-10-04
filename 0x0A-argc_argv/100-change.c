#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for a given amount of number
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: number of coins or 1
 **/
int main(int argc, char *argv[])
{
	int the_amount, the_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	the_amount = atoi(argv[1]);
	the_coins = 0;
	if (the_amount > 25)
	{
		while (the_amount >= 25)
			the_amount -= 25, the_coins++;
	}
	if (the_amount > 10 && the_amount < 25)
	{
		while (the_amount >= 10)
			the_amount -= 10, the_coins++;
	}
	if (the_amount > 5 && the_amount < 10)
	{
		while (the_amount >= 5)
			the_amount -= 5, the_coins++;
	}
	if (the_amount > 2 && the_amount < 5)
	{
		while (the_amount >= 2)
			the_amount -= 2, the_coins++;
	}
	if (the_amount == 1 || the_amount == 2 || the_amount == 5 ||
			the_amount == 10 || the_amount == 25)
	{
		the_coins++;
	}
	printf("%d\n", the_coins);
	return (0);
}
