#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>
/**
 * struct fmt - option
 * @fmt: sp
 * @fn: function
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list);
};
typedef struct fmt option;
int _putchar(char c);
int handle_print(const char * fmt, int *ind, va_list list);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
#endif
