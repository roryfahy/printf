#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _rev - reverse a string
 * @buff_boi_cpy: input string
 *
 * Return: nothing
 */
void _rev(char *buff_boi_cpy)
{
	int i, j, k;
	char temp;

	k = _strlen(buff_boi_cpy);
	j = k - 1;
	for (i = 0; i < j; i++, j--)
	{
		temp = buff_boi_cpy[i];
		buff_boi_cpy[i] = buff_boi_cpy[j];
		buff_boi_cpy[j] = temp;
	}
}
