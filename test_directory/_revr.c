#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _revr - reverse a string
 * @str: input string
 *
 * Return: reveresed str
 */
char *_revr(char *str)
{
	int i, j, k;
	char *rev;

	k = _strlen(str);
	rev = malloc(k + 1);
	if (!rev)
		return (NULL);
	j = k - 1;
	for (i = 0; i < k; i++, j--)
	{
		rev[i] = str[j];
	}
	rev[i] = '\0';
	return (rev);
}
