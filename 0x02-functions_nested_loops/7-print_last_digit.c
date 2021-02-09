#include "holberton.h>

/**
 * print_last_digit - Entry.
 *
 * @last: an integer argument
 *
 * Return: Always 0.
 */

int print_last_digit(int n){
	if (n < 0)
	n = -n;
	int m;
	m = n%10;
	_putchar(m + '0');
	return m;
}
