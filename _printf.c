#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
* print_char - this prints character
*@c: placeholder for character
* Return: the character
*/

int print_char(int c)
{
return (write(1, &c, 1));
}

/**
* print_str - this prints the string
*@str: placeholder for string
* Return: the string
*/

int print_str(char *str)
{
int count;
count = 0;
while (*str != '\0')
{
print_char((int)*str);
++count;
++str;
}
return (count);
}

/**
* print_format - this is a format function
* @ap: argument pointer
* @va_list: list of arguments
* @letter: placeholders
* Return: the number of characters printed
*/

int print_format(char letter, va_list, ap)
{
int count;
count = 0;
if (letter == 'c')
count += print_char(va_arg(ap, int))
else if (letter == 's')
count += print_str(va_arg(ap, char *))
else
count += write(1, &letter, 1);
return (count);
}

/**
* _printf - this is a printf function
*@format: the string
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
