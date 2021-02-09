#include "holberton.h"
#include <stdio.h

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
int S = 0, i;
for (i = 0; i < 1024; i++)
if (i % 3 == 0 || i % 5 == 0)
S = S + i;
printf("%d", S);
return (0);
}
