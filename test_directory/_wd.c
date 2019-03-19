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
int _wd(va_list list)
{
	char buff[11];
	int i  = va_arg(list, int);
	char *str = _itoa(i, buff,
}
