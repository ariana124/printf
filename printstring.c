#include "holberton.h"

/**
 * print_s - function that prints string
 * @s: string to be printed
 * Return: void
 */
int print_s(char *s)
{
	int i;

	if (s == NULL)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
	{
		print_c(s[i]);
	}
	return (i);
}
