#include "holberton.h"

void swap_int(int *a, int *b)
{
int t;

t = *a;
*a = *b;
*b = t;
}
