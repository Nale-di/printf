#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
int _printf(const char *format, ...);
int print_char(int c);
int print_str(char *str);
int print_format(char letter, va_list args);

#endif
