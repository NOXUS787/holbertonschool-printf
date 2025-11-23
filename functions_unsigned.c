#include "main.h"

/**
 * print_unsigned - prints an unsigned integer (%u)
 * @ap: argument list
 *
 * Return: number of characters printed
 */
int print_unsigned(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	unsigned int num = n;
	unsigned int divisor = 1;
	int digit, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

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

/**
 * print_octal - prints an unsigned int in octal (%o)
 * @ap: argument list
 *
 * Return: number of characters printed
 */
int print_octal(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	unsigned int num = n;
	char buffer[32];
	int i = 0, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i++] = (num % 8) + '0';
		num /= 8;
	}

	while (i > 0)
	{
		_putchar(buffer[--i]);
		count++;
	}

	return (count);
}

/**
 * print_hex_lower - prints an unsigned int in lowercase hex (%x)
 * @ap: argument list
 *
 * Return: number of characters printed
 */
int print_hex_lower(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	unsigned int num = n;
	char buffer[32];
	char *digits = "0123456789abcdef";
	int i = 0, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i++] = digits[num % 16];
		num /= 16;
	}

	while (i > 0)
	{
		_putchar(buffer[--i]);
		count++;
	}

	return (count);
}

/**
 * print_hex_upper - prints an unsigned int in UPPERCASE hex (%X)
 * @ap: argument list
 *
 * Return: number of characters printed
 */
int print_hex_upper(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	unsigned int num = n;
	char buffer[32];
	char *digits = "0123456789ABCDEF";
	int i = 0, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i++] = digits[num % 16];
		num /= 16;
	}

	while (i > 0)
	{
		_putchar(buffer[--i]);
		count++;
	}

	return (count);
}
