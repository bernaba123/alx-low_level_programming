#include "holberton.h"
/**
* _strcat - check the code for Holberton School students.
*
* @dest: is a character param
*
* @src: is a character param
*
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
}
