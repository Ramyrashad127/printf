#include"main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_char - char
 * @list: vector
 * Return:1
 */
int print_char(va_list list)
{
	char c = va_arg(list,int);

	_putchar(c);
	return (1);
}
/**
 * print_percent - %
 * @list: vector
 * Return: 1
 */
int print_percent(va_list list)
{
	(void)(list);
	_putchar('%');
	return (1);
}
/**
 * print_string - string
 * @list: vector
 * Return: number of char
 */
int print_string(va_list list)
{
	char* str = va_arg(list, char *);
	int sum = 0, i;

	if (!str)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		sum++;
		_putchar(str[i]);
	}
	return (sum);
}
