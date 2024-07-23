#include "main.h"

/**
  * print_char - fonction qui permet d'afficher un caractère.
  * @args: liste d'arguments qui contient le caractère à afficher.
  *
  * Return: 1 qui indique que un caractère a été affiché.
  */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}
