#include"main.h"
/**
 * _printf - print
 * @format: string
 * return: int
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				sum += print_char(list);
			else if (format[i] == '%')
				sum += print_mod();
			else if (format[i] == 's')
				sum += print_string(list);
		}
		else if (format[i] == '\n')
		{
			sum++;
			_putchar('\n');
		}
		else
		{
			sum++;
			_putchar(format[i]);
		}
	}
	va_end(list);
	return (sum);
}
