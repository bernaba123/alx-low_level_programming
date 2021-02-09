#include "holberton"
#include <stdio.h>
#include <stdlib>

/**
 * print_last_digit - Entry.
 *
 * @n: an integer argument
 *
 * Return: Always 0.
 */
 
void print_to_98(int n){
if (n >= 98){
while(n >= 98)
{
printf("%d", n);
n--;
if (n >= 98)
printf(", ");
}
printf("\n");
}
else if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
n++;
if (n < 99)
printf(", ");	
}
printf("\n");
}
}
