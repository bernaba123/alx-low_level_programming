#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 *
 * @s: is a character param
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int l = 0;

while (*s != '\0')
{
s++;
l++;
}
return (l);
}
