#include "holberton.h"

/**
  * rev_string - prints string
  * @s: input string
  * Return: no return
 */

void rev_string(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
}
