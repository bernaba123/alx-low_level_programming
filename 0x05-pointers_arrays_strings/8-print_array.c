#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints elements of array
 * @a: is integer param
 * @n: is integer param
 */
void print_array(int *a, int n)
{
for (n = 0; n < 5; n++)
{
printf("%d", a[n]);
if (n != 4)
printf(", ");
}
}
