#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _printf - prints a formatted string
 * @format: is a character string
 *
 * Return: numb of chars printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int bytes;
	int i = 0;
	int j = 0;
	f_mod c_spes[]=
	{
		{'c', _wchar},
		/* {'s', _wstr}, */
		/* {'d', _wd}, */
		/* {'i', _wint}, */
		{'\0', NULL}
	};

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
			while (c_spes[j].c != '\0')
			{
				if (format[i] == c_spes[j].c)
				{
					c_spes[j].fptr(list);
					i++;
					break;
				}
				j++;
			}
		}
		write(1, &format[i], 1);
		i++;
	}
	bytes = i;
	return (bytes);
}
