#include "main.h"

/**
  * func_specifiers - les spécificateurs utilisés tels que modulo,
  * ou s pour string, ou c pour char etc.
  * @conv_specif: les spécifieurs de conversion pré-cités.
  * @args: les arguments, particulièrement si spécifieurs utilisé.
  * Return: le comptage de spécifieur si type identifié dans le tableau.
  *
  */
int func_specifiers(char conv_specif, va_list args)
{
	int i = 0;
	int count_total = 0;

	specifiers_t specif[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_modulo},
		{'d', print_digit},
		{'i', print_digit},
		{0, NULL}
	};

	while (specif[i].specifiers)
	{
		if (conv_specif == specif[i].specifiers)
		{
			count_total += specif[i].f(args);
		}

		i++;
	}

	if (count_total == 0)
	{
		count_total += _putchar('%');
		count_total += _putchar(conv_specif);
	}

	return (count_total);
}
