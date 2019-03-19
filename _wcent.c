#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _wcent - write a percent sign
 * @list: va_list
 *
 * Return: 1
 */
int _wcent(__attribute__ ((unused)) va_list list)
{
	char c = '%';

	write(1, &c, 1);
	return (1);
}
