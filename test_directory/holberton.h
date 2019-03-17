#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

/*helper functions*/
int _strlen(const char *s);

/**
 * struct data_types - the types of data we can have
 * @c: char data type
 * @s: string data type
 */
typedef struct data_types
{
	char c;
	void (*f) (va_list);
}types;

/* core functions */
int _printf(const char *format, ...);

#endif /* _HOLBERTON_H_ */
