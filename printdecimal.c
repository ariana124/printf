#include "holberton.h"

/**
 * print_d - prints a decimal (integer)
 * @n: integer
 * Return: decimal (integer)
 */
int print_d(int n)
{
	unsigned int num;

	int count = 0;

	if (n < 0)
	{
		print_c('-');
		num = -n;
		count = count + 1;
	}
	else
		num = n;

	count = count + print_drc(num);

	return (count);
}

/**
 * print_drc - prints a integer recursively
 * @n: integer
 * Return: the byte count of the integer
 */
int print_drc(unsigned int n)
{
	int i = 1;

	if (n / 10)
		i = print_drc(n / 10) + 1;
	print_c(n % 10 + '0');

	return (i);
}
