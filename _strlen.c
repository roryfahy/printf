#include "holberton.h"
/**
 * _strlen - Find the length of a string including '\0'
 * @s: The string to find the length of
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int i = 1;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
