#include <stdio.h>

/**
 * main - fibonacci 50
 *
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int b = 1;
	unsigned long int a = 2;

	printf("%lu", b);

	for (i = 1; i < 50; i++)
	{
		printf(", %lu", a);
		a += b;
		b = a - b;
	}
	printf("\n");
	return (0);
}
