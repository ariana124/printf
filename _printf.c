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
		if (format == NULL)
			return (-1);
		if (format[i] != '%')
		{
			print_c(format[i]);
			result++;
		}
		if (format != NULL && format[i] == '%')
		{
			switch (format[i + 1])
			{
			case '\0':
				return (-1);
			case '%':
				result += print_p();
				i++;
				break;
			case 'c':
			case 's':
			case 'd':
			case 'i':
				result += ext1_printf(ap, format[i + 1], &i);
				break;
			default:
				result += print_p();
				i++;
				break;
			}
		}
		i++;
	}
	va_end(ap);
	return (result);
}

/**
 * ext1_printf - function extension for printf
 * @ap: va list
 * @ch: case character
 * @p: pointer to index
 * Return: result to the main printf result
 */
int ext1_printf(va_list ap, char ch, int *p)
{
	int result = 0;

	switch (ch)
	{
	case 'c':
	{
		result += print_c(va_arg(ap, int));
		*p = *p + 1;
		break;
	}
	case 's':
		result += print_s(va_arg(ap, char *));
		*p = *p + 1;
		break;
	case 'd':
		result += print_d(va_arg(ap, int));
		*p = *p + 1;
		break;
	case 'i':
		result += print_i(va_arg(ap, int));
		*p = *p + 1;
		break;
	}
	return (result);
}
