#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include<stdio.h>
#include <unistd.h>
#include <string.h>
int print_int(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_mod();
int print_string(va_list list);
#endif
