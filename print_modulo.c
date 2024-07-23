#include "main.h"

/**
  * print_modulo - permet d'afficher le modulo, soit %.
  * @args: le modulo en tant qu'argument.
  * Return: 1 ce qui indique qu'un caractère est affiché.
  */

int print_modulo(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}
