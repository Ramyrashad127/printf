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

	if (!format)
		return (-1);
	va_start(list, format);
	for (i = 0; format [i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				sum += print_char(list)
			else if (format[i] == '%')
				sum += print_percent();
			else if (format[i] == 's')
				sum += print_string(list);
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
