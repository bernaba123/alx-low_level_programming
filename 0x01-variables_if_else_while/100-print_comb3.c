#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 48, j = 49;
while (i < 58)
{
while (j != 58)
{
if (i != j && i < j)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
j++;
}
j = 48;
i++;
}
putchar('\n');
return (0);
}
