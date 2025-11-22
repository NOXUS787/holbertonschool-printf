# holbertonschool-printf

A custom implementation of the C standard library function `printf`.

This project was created for the Low-Level Programming track at Holberton School.  
It recreates basic functionality of `printf` using only `write`, variadic functions, and manual format parsing.

## Description

The `_printf` function produces output according to a format string.  
The format string is composed of zero or more directives.  
Each conversion specification begins with `%` and ends with a conversion specifier.

This project handles a subset of the standard C `printf` functionality.

---

## Supported Conversion Specifiers

| Specifier | Meaning                        |
|----------|--------------------------------|
| `%c`      | Print a single character        |
| `%s`      | Print a string of characters    |
| `%%`      | Print a percent sign            |
| `%d`      | Print a decimal integer         |
| `%i`      | Print an integer                |

---

## Function Prototype

```c
int _printf(const char *format, ...);