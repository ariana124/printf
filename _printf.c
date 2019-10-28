#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - prints data and information
 * @format: the data to be printed
 * Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	int result = 0;

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			print_c(format[i]);
			result++;
		}
		if (format != NULL && format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				print_c(va_arg(ap, int));
				result++;
				i++;
				break;
			case 's':
				result += print_s(va_arg(ap, char *));
				i++;
				break;
			case '%':
				result += print_p();
				i++;
				break;
			case 'd':
				result += print_d(va_arg(ap, int));
				i++;
				break;
			case 'i':
				result += print_i(va_arg(ap, int));
				i++;
				break;
			}
		}
		i++;
	}
	va_end(ap);
	return (result);
}
