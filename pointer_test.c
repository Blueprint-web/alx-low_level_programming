#include <stdio.h>
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
	*cc = 'o';
	ccc = 'l';
	printf("address of *cc: %p\n", cc);
	printf("adress of ccc: %p\n", &ccc);
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("value of C before funtion call: %c\n", c);
	printf("the address of C before funtion calls: %p\n", &c);
	printf("value of P before funtion call: %c\n", *p);
	printf("address of P before funtion call: %p\n", p);
	modif_my_char_var(p, c);
	printf("value of c: %c\n", c);
	printf("address of c: %p\n", &c);
	printf("value of p: %c\n", *p);
	printf("address of p: %p\n", p);
	return (0);
}
