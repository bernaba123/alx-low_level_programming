#include "holberton.h"

/**
 * *_strncat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * @n: param points to an int
 * Return: return value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != src[n])
{
dest[i] = src[j];
j++;
i++;
}

dest[j] != src[n];
return (dest);
}
