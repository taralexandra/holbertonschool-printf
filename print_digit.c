#include "main.h"

/**
  * print_digit - fonction which allows to display digits.
  * @args: the argument and maybe, the digit.
  *
  * Return: 1 when one char is printed.
  */
int print_digit(va_list *args)
{
	int decimal = 1;
	int count_total = 0;
	long int digit = va_arg(*args, int);
	long int digitals;

	if (digit < 0)
	{
		count_total += _putchar('-');
		digit *= -1;
	}

	if (digit < 10)
	{
		return (count_total += _putchar(digit + '0'));
	}

	digitals = digit;

	while (digitals > 9)
	{
		decimal *= 10;
		digitals /= 10;
	}

	while (decimal >= 1)
	{
		count_total += _putchar(((digit / decimal) % 10) + '0');
		decimal /= 10;

	}

	return (count_total);
}
