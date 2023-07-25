#include <stdio.h>
#include "main.h"

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n - 1 == a[i])
		{
		printf("%d", a[i]);
		} else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
