#include "main.h"

/**
 * print_int_recursive - helper to print a positive number
 * @num: positive long integer
 *
 * Return: number of digits printed
 */
int print_int_recursive(long num)
{
	int count = 0;

	if (num / 10)
		count += print_int_recursive(num / 10);

	_putchar((num % 10) + '0');
	return (count + 1);
}

/**
 * print_int - prints a signed integer (%d, %i)
 * @ap: argument list
 *
 * Return: number of characters printed
 */
int print_int(va_list ap)
{
	long n = va_arg(ap, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;  /* safe because we promoted to long */
	}

	count += print_int_recursive(n);

	return (count);
}
