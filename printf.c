#include"main.h"
/**
 * _printf - print
 * @format: string
 * Return: number of char
 */
int _printf(const char *format, ...)
{
	va_list ls;
	int sum = 0, i;
	
	va_start(ls, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	else if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i+1] == 'c')
			{
				sum += print_char(ls);
				sum--;
			}
			else if (format[i+1] == '%' )
			{
				sum += print_mod(ls);
				sum--;
			}
			else if(format[i+1] == 's')
			{
				sum += print_string(ls);
				sum--;
			}
		}
		else
		{
			sum += _putchar(format[i]);
		}
	}
	return (sum);
}
