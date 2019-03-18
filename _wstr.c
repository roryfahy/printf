#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _wstr - write a string
 * @list: va_list
 *
 * Return: nothing
 */
void _wstr(va_list list)
{
	 char *cptr = va_arg(list, char *);

	for (; cptr && *cptr; cptr++)
		write(1, cptr, 1);
}
