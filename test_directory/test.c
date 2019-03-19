#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _printf - Produces output according to a format
 * @format: The character string containing (or not) the types to print
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list op_args;
	char *ptr_format;
	char *temp;
	int i;
	int count;

	va_start (op_args, format);
	for (; *ptr_format != '\0'; ptr_format++)
	{
		if (*ptr_format == '%')
		{
			ptr_format++;
			switch (*ptr_format)
			{
			case 'c':
				write(1, &(va_arg(op_args, int)), 1);
				break;
			case 's':
				temp = va_arg(op_args, char *);
				write(1, &temp, _strlen(temp));
				break;
			}
			write(1, format, _strlen(format);
