#include"main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, sum = 0;
	va_list list;

	va_start(list, format);
	for (i = 0; format [i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			sum += handle_print(format, &i, list);
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}
	va_end(list);
	return (sum);
}
