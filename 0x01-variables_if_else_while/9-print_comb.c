#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 0;
while (a < 10)
{
putchar(a + '0');
a++;
if (a < 10)
putchar(',');
putchar(' ');
}
return (0);
}
