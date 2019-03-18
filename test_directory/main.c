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
	_printf("%s is %s\n", kitty, kitty);
	printf("Length:[%d, %i]\n", len, len2);

/* new tests */
	printf("\n\n\n new test that haven't passed yet");
	_printf("%c\n", 5000);
	printf("%c\n", 5000);

	/* _printf("%c\n", ''); */
	/* printf("%c\n", ''); */

	_printf("%s\n", "");
	printf("%s\n", "");

	_printf("");
	/* printf(""); */

	return (0);
}
