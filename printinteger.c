#include "holberton.h"

/**
 * print_i - prints an integer
 * @n: integer to be printed
 * Return: printed number
 */
int print_i(int n)
{
	int count = 0;

	if (n < 0)
	{
		print_c('-');
		n = -n;
		count = count + 1;
	}

	count = count + print_irc(n);

	return (count);
}

/**
 * print_irc - prints the integer recursively
 * @n: integer
 * Return: the byte count of the integer
 */
int print_irc(int n)
{
	int i = 1;

	if (n / 10)
		i = print_irc(n / 10) + 1;
	print_c(n % 10 + '0');

	return (i);
}
