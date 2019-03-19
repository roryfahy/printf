#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _wIntStr - write a string
 * @istr: char str representation of int
 *
 * Return: count
 */
int _wIntStr(char *istr)
{
	int count = 0;

	for (; istr && *istr; istr++, count++)
		write(1, istr, 1);
	return (count);
}
