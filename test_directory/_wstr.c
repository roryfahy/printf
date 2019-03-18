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
int _wstr(va_list list)
{
	int count = 0;
	char *cptr = va_arg(list, char *);

	for (; cptr && *cptr; cptr++, count++)
		 write(1, cptr, 1);
	return (count);
}
