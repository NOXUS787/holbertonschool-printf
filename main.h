#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
int print_int(va_list ap);
int print_unsigned(va_list ap);
int print_octal(va_list ap);
int print_hex_lower(va_list ap);
int print_hex_upper(va_list ap);
int print_int(va_list ap);
int print_int_recursive(long num);


/**
 * struct specifier - struct for format specifiers
 * @symbol: the format specifier character
 * @func: pointer to the function that handles it
 */
typedef struct specifier
{
	char symbol;
	int (*func)(va_list ap);
} spec_t;

/* main functions */
int _printf(const char *format, ...);
int _putchar(char c);

/* handlers */
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);

/* dispatcher */
int (*get_func(char s))(va_list ap);

#endif /* MAIN_H */
