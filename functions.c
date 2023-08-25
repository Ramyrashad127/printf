#include "main.h"
/**
 * print_char - chaer
 * @list: vector
 * Return:1
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	if (c == NULL)
		return (-1);
	_putchar(c);
	return (1);
}
/**
 * print_mod - mod
 * Return: 1
 */
int print_mod(void)
{
	_putchar('%');
	return (1);
}
/**
 * print_string - string
 * @list: vi
 * Return: n
 */
int print_string(va_list list)
{
	char *str = va_arg(list, char*);
	unsigned int i, sum = 0;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		sum++;
	}
	return (sum);
}
