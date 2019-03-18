#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
 * main - test for the holberton stdents
 *
 * Return: 0 upon success
 */
int main(void)
{
	char *kitty = "hello kitty";
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("%s\n", kitty);
	return (0);
}
