#include "holberton.h"

/**
 * print_d - prints a decimal (integer)
 * @n: integer
 * Return: decimal (integer)
 */
int print_d(int n)
{
	int count = 0;

	if (n < 0)
	{
		print_c('-');
		n = -n;
		count = count + 1;
	}

	count = count + print_drc(n);

	return (count);
}

/**
 * print_drc - prints a integer recursively
 * @n: integer
 * Return: the byte count of the integer
 */
int print_drc(int n)
{
	int i = 1;

	if (n / 10)
                i = print_irc(n / 10) + 1;
        print_c(n % 10 + '0');

        return (i);
}
