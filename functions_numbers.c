#include "main.h"

/**
 * print_int - prints an integer (%d, %i)
 * @ap: argument list
 *
 * Return: number of characters printed
 */
int print_int(va_list ap)
{
	int n = va_arg(ap, int);
	int num, digit, count = 0;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	num = n;

	while ((num / divisor) >= 10)
		divisor *= 10;

	while (divisor > 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		count++;
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}
