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

	_printf("%%\n");
	_printf("%idc is fun\n", 145);
	printf("%dc is fun\n", 145);
	len = _printf("Let's %s\n", kitty);
	len2 = printf("Let's %s\n", kitty);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("%s is %s\n", kitty, kitty);
	printf("Length:[%d, %i]\n", len, len2);

/* new tests */
/* 	printf("\n\n\n new test that haven't passed yet"); */
/* 	_printf("%c\n", 5000); */
/* 	printf("%c\n", 5000); */

/* 	/\* _printf("%c\n", ''); *\/ */
/* 	/\* printf("%c\n", ''); *\/ */

/* 	_printf("%s\n", "\0"); */
/* 	printf("%s\n", "\0"); */

/* 	_printf(""); */
/* 	/\* printf(""); *\/ */
/* 	_printf("%lhello\n"); */
/* 	printf("%lhello\n"); */

	return (0);
}
