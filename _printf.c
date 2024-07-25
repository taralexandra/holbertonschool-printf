#include "main.h"

/**
  * _printf - printf, Holberton's way.
  * @format: specifiers or character(s) entered.
  * Return: total of char printed if there is no mistake (else rtrn -1)
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0, count_total;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[i])
	{
		count_total = 0;
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
			{
				count = -1;
				break;
			}

			count_total += func_specifiers(format[i + 1], &args);
			if (count_total == 0)
				count += _putchar(format[i + 1]);
			if (count_total == -1)
				count = -1;
			i++;
		}
		else
		{
			(count == -1) ? (_putchar(format[i])) : (count += _putchar(format[i]));
		}
		i++;

		if (count != -1)
			count += count_total;
	}
	va_end(args);
	return (count);
}
