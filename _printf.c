#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - this is a printf function
 * @format: the string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
va_list ap;
int count;
va_start(ap, format);
count = 0;
for (count = 0; format[count] != '\0'; count++)
{
if (format[count] == '%')
{
format++;
char next_char = *format;
print_format(next_char, ap)
}
else
count += write(1, format, 1);
++format;
}
va_end(ap);
return (count);
}
