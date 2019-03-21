#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
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
	int bytes, n = 0;
	int count = 0;
	int i = 0;
	int num_of_percents = 0;
	int (*result)(va_list);

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			i++;
		}
		else
		{
			num_of_percents++;
			/* i++; */
			result = f_select(format[i + 1]);
			if (result == NULL)
			{
				va_end(list);
				return (-1);
			}
			n = result(list);
			if (n != -1)
				count += n;
			i += 2;
		}
	}
	bytes = i + count - 2 * num_of_percents;
	return (bytes);
}
