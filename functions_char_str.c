#include "main.h"

/**
 * print_char - prints a single character
 * @ap: argument list
 *
 * Return: number of characters printed
 */
int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - prints a string
 * @ap: argument list
 *
 * Return: number of characters printed
 */
int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percent - prints a percent sign
 * @ap: unused
 *
 * Return: number of characters printed
 */
int print_percent(va_list ap)
{
	(void)ap;

	_putchar('%');
	return (1);
}
