#include"main.h"
/**
 * print_string - print
 * @ls: list
 * Return: number of char
 */
int print_string(va_list ls)
{
	char* ptr = va_arg(ls, *char);
	int i, sum = 0;

	for(i = 0; ptr[i] != '\0'; i++)
	{
		sum++;
		_putchar(ptr[i]);
	}
	return (sum);
}

