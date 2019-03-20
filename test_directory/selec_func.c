#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"

/**
 * f_select - determine which function to call
 * @s: pointer to input char
 *
 * Return: numb of chars printed
 */
int (*f_select(char s))(va_list)
{
	int j = 0;
	f_mod c_spes[] = {
		{'c', _wchar},
		{'s', _wstr},
		{'d', _wd},
		{'i', _wd},
		{'%', _wcent},
		{'r', _wrev},
		{'\0', NULL}
	};

	j = 0;
	while (c_spes[j].c != '\0')
	{
		if (s == c_spes[j].c)
			return (c_spes[j].fptr);
		j++;
	}
	return (NULL);
}
