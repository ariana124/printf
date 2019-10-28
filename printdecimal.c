#include "holberton.h"

/**
 * print_d - prints a decimal (integer)
 * @n: integer
 * Return: decimal (integer)
 */
int print_d(int n)
{
	if (n < 0)
	{
		print_c('-');
		n = -n;
	}

	if (n == 0)
		print_c('0');

	if (n / 10) /**
		     * we use recursion to divide the number by 10 until we
		     * reach the decimal point
		     */
		print_i(n / 10);

	print_c(n % 10 + '0'); /* prints the last digit */

	return (n);
}
