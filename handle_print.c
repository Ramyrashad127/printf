#include"main.h"
/**
 * handle_print - handle
 * @list: vector
 * @@fmt: string
 * @ind: index
 * Return: number of char
 */
int handle_print(const char * f, int *ind, va_list list)
{
	int i;
	option sp[]={
		{'c', print_char}, {'s', print_string}
		{'%', print_percent}, {'\0', NULL}
	};

	for (i = 0; sp[i].fmt != '\0'; i++)
	{
		if (sp[i].fmt ==  f[*ind])
			return (sp[i].fn(list));
	}
	return (-1);
}
