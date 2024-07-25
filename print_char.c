#include "main.h"

/**
  * print_char - fonction that allow to print a char.
  * @args: list of args to print.
  *
  * Return: 1 if one character is displayed.
  */
int print_char(va_list *args)
{
	char c = va_arg(*args, int);

	_putchar(c);

	return (1);
}
