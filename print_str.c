#include "main.h"

/**
  * print_str - fonction qui permet d'afficher une chaîne de caractères.
  * @args: argument, la chaîne à afficher.
  * Return: comptage des caractères.
  */
int print_str(va_list args)
{
	int i;
	int count_total = 0;
	char *str = va_arg(args, char *);

	if (!str)
	{
		str = "(null)";
	}

	if (str[0] == '\0')
	{
		return (-1);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		count_total += _putchar(str[i]);
	}

	return (count_total);

}
