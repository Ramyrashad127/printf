#include"main.h"
/**
 * print_char - print
 * @ls: list
 * Return: 1
 */
int put_char(va_list ls)
{
	_putchar(va_arg(ls,int));
	return (1);
}
