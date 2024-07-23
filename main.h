#ifndef MAIN_H
#define MAIN_H

/* Bibliothèques inclues */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * struct specifiers - Une structure pour le format.
  * @specifiers: argument => specifieurs tels que modulo, add etc.
  * @f: la fonction associée.
  */
typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;

/* Prototypes des fonctions */

int _putchar(char c);
int _printf(const char *format, ...);
int func_specifiers(char s, va_list args);

/* Les spécifieurs de conversions */

int print_char(va_list args);
int print_modulo(va_list args);
int print_str(va_list args);
int print_digit(va_list args);
#endif
