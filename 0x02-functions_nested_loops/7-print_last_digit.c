#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * print_last_digit - Entry.
 *
 * @n: an integer argument
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (m >= 0)
	{
		_putchar(m + '0');
		return (m);
	}

	_putchar(-m + '0');
	return (-m);
}
