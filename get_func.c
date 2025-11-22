#include "main.h"

/**
 * get_func - selects the correct function for a format specifier
 * @s: the format specifier character
 *
 * Return: pointer to function, or NULL if not found
 */
int (*get_func(char s))(va_list)
{
	int i;
	spec_t specs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	for (i = 0; specs[i].symbol != '\0'; i++)
	{
		if (specs[i].symbol == s)
			return (specs[i].func);
	}
	return (NULL);
}
