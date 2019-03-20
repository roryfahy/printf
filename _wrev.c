#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _wrev - write string in rev
 * @list: va_list
 *
 * Return: nothing
 */
int _wrev(va_list list)
{
	int count = 0;
	char *cptr = va_arg(list, char *);
	char *rev, *cpy;

	rev = _revr(cptr);
	cpy = rev;
	if (!rev)
		return (0);
	for (; rev && *rev; rev++, count++)
		write(1, rev, 1);
	free(cpy);
	return (count);
}
