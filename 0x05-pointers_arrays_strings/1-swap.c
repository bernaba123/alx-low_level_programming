#include "holberton.h"
/**
 * swap_int - prints a triangle
 *
 * @a: an integer params
 *
 * @b: an integer params
 *
 * void function
 */
void swap_int(int *a, int *b)
{
int t;

t = *a;
*a = *b;
*b = t;
}
