#include "holberton"

/**
 * jack_bauer
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int a = 0;
while (a < 3)
{
int b = 0;
if (a == 2)
{
while (b < 4)
{
int k = 0;
while (k < 6)
{
int l = 0;
while (l < 10)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
l++;
}
k++;
}
b++;
}
}
else
{
while (b < 10)
{
int k;
while (k < 6)
{
int l = 0;
while (l < 10)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
l++;
}
k++;
}
b++;
}
}
a++;
}
}
