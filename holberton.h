#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);

int print_c(char c);

int print_s(char *s);

int print_i(int n);

int print_d(int n);

int print_p(void);

int ext1_printf(va_list ap, char ch, int *p);

int print_irc(int n);

int print_drc(unsigned int n);

#endif
