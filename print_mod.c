#include"main.h"
/**
 * print_mod - print
 * @ls: list
 * Return: 1
 */
int print_mod(va_list ls)
{
	char c = va_arg(ls, char);

	_putchar(c);
	return (1);
}
