#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _wchar - write a char
 * @list: va_list
 *
 * Return: nothing
 */
void _wchar(va_list list)
{
	int c = va_arg(list, int);

	write(1, &c, 1);
}
void _wd(va_list list)
{
	int c = va_arg(list, int);
	char i = c + '0';
	write(1, &i, 1);
}
