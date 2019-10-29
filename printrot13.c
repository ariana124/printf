#include "holberton.h"

/**
 * print_rot - encodes a string into rot13
 * @s: string to be encoded
 * Return: the byte count of the encoded string
 */
int print_rot(char *s)
{
	int count = 0;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == alph[j])
			{
				s[i] = rot13[j];
				count++;
				break;
			}
		}
	}
	print_s(s);
	return (count);
}
