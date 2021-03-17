#include "holberton.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	int i = 0; 
	if (*s != '\0')
	{
		i++;
		return i + _strlen_recursion(s + i);
	}
}
