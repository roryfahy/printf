#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _wd - write ahn int
 * @list: va_list
 *
 * Return: nothing
 */
int _wd(va_list list)
{
	char buff[65] = {0};
	int num = va_arg(list, int);
	int count;

	count = _wIntStr(_itoa(num, buff));
	return (count);
}
