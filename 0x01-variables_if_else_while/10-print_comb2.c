#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 0;
int b = 0;
while (a < 10)
{
while (b < 10)
{
putchar(b + '0');
b++;
}
putchar(a + '0');
a++;
}
return (0);
}
