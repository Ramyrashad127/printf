#ifndef PRINT_F
#define PRINT_F
#include<stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_chafr(va_list ls);
int print_string(va_list ls);
int print_mod(va_list ls);
int print_int(va_list ls);
#endif
