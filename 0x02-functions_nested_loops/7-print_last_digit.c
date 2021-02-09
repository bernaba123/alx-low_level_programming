#include "holberton.h>

int print_last_digit(int n){
	if (n < 0)
	n = -n;
	int m;
	m = n%10;
	_putchar(m + '0');
	return m;
}
