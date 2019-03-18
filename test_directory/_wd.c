#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _wd - write an int
 * @list: va_list
 *
 * Return: nothing
 */
void _wd(va_list list)
{
	int i  = va_arg(list, int);
	if (i < 0)
	{
		write(1 ,"-", 1);
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	write(1, , 100);
}
