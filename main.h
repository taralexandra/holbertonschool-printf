#ifndef MAIN_H
#define MAIN_H

/* Libraries included */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * struct specifiers - one struct for format.
  * @specifiers: argument => specifiers like modulo, add etc.
  * @f: the fonction associated.
  */
typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;

/* Prototypes of the fonctions */

int _putchar(char c);
int _printf(const char *format, ...);
int func_specifiers(char s, va_list args);

/* The conversions specifiers */

int print_char(va_list args);
int print_modulo(va_list args);
int print_str(va_list args);
int print_digit(va_list args);
#endif
