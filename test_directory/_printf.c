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
	int bytes;

	bytes = write(1, format, _strlen(format));
	return (bytes);
}
