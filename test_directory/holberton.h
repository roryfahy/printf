#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

/*helper functions*/
int _strlen(const char *s);
int _wchar(va_list);
int _wstr(va_list);
void _wint(va_list);
void _wd(va_list);
/**
 * struct data_types - the types of data we can have
 * @c: char data type
 * @s: string data type
 */
typedef struct data_types
{
	char c;
	int (*fptr) (va_list);
}f_mod;

/* core functions */
int _printf(const char *format, ...);

#endif /* _HOLBERTON_H_ */
