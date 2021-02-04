#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point.
* Return: 0 (success).
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
putchar('\n');
return (0);
}
