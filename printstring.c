#include "holberton.h"

/**
 * print_s - function that prints string
 * @s: string to be printed
 * Return: void
 */
int print_s(char *s)
{
	int i, j;
	char n[] = "(null)";

	if (s == NULL)
	{
		for (j = 0; n[j] != '\0'; j++)
			print_c(n[j]);
		return (j);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		print_c(s[i]);
	}
	return (i);
}
