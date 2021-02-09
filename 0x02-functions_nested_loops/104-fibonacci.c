#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, t1 = 1, t2 = 1, n;

for (i = 1; i < 99; i++)
{
if (i > 1)
printf(", ");
printf("%d", t1);
n = t1 + t2;
t1 = t2;
t2 = n;
}
return 0;
}
