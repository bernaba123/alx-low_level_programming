#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i = 0;
char c;
  
while (i <= 9)
{
char c = 'a';
  
while (c <= 'z')
{
_putchar (c);
c++;
}
_putchar ('\n');
i++;
}
}
