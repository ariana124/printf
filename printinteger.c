#include "holberton.h"

/**
 * print_i - prints an integer
 * @n: integer to be printed
 * Return: printed number
 */
int print_i(int n)
{
	if (n < 0)
	{
		print_c('-');
		n = -n;
	}

	if (n == 0)
		print_c('0');

	if (n / 10)
		print_i(n / 10);
	print_c(n % 10 + '0');

	return (n);
}
