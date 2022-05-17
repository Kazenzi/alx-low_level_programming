#ifndef VARIADIC_FUNCTIONS_H

#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

#include <stdio.h>

/**

* struct print - multiple choice print

* @x: char Type of print

* @T_func: funct

*/

typedef struct print

{

char *x;

void (*T_func)(va_list);

} t_print;

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char *const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
