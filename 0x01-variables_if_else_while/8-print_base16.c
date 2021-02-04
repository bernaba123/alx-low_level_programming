#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 0;
while (a < 10)
{
putchar(a + '0');
a++;
}
a = 'a';
while (a <= 'f')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
