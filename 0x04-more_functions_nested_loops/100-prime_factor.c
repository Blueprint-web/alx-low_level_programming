#include <stdio.h>

int main(void)
{
	int factors = 2;
	long int largest_f = 612852475143;
	int primef = 1;
	int i;

	for 

		if (largest_f % factors == 0)
		{
			primef = factors;

			largest_f /= factors;
		} else
		{
			factors++;
		}
		printf("%d", primef);
	putchar('\n');
	return (0);
}
