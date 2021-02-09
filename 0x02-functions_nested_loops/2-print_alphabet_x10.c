#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i;
char c;
  
for (i = 0; i < 10; i++)
{
char c = 'a';
  
while (c <= 'z')
{
_putchar (c);
c++;
}
_putchar ('\n');
}
}
