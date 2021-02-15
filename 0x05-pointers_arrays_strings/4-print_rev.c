#include "holberton.h"

void print_rev(char *s)
{
int i = 62;
  
for (; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
