#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _itoa - convert integer to char array
 * @num: int to convert
 * @buff_boi: used to store converted char
 *
 * Return: string to be written
 */
char *_itoa(int num, char *buff_boi)
{
	int i = 0;
	int r;
	int rep = num;

	if (num < 0)
	{
		num = -num;
	}
	do {
		r = num % 10;
		buff_boi[i] = r + '0';
		num /= 10;
		i++;
	} while (num != 0);
	if (rep < 0)
	{
		buff_boi[i] = '-';
		i++;
	}
	_rev(buff_boi);
	return (buff_boi);
}
