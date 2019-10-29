#include "holberton.h"
#include <unistd.h>

/**
 * print_c - function that prints a character
 * @c: character to be printed
 * Return: character
 */
int print_c(char c)
{
	return (write(1, &c, 1));
}
