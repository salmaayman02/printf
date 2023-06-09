#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - print format
 * @format: string of format
 *
 * Description: print format
 *
 * Return: integr value
*/

int _printf(const char *format, ...)
{

	va_list argn;
	int i = 0, r = 0, y;
	char *x;

	va_start(argn, format);
	while (format[i])
	{
		if (format[i] == '%')
		{	i++;
			switch (format[i])
			{	case 'c':
				{	x = va_arg(argn, char *);
					r += print_string(x);
					break;
				}
				case 's':
				{	x = va_arg(argn, char *);
					r += print_string(x);
					break;
				}
				case '%':
				{	x = va_arg(argn, char *);
					r += put_char('%');
					break;
				}
				case 'd':
				case 'i':
				{	y = va_arg(argn, int);
					r += print_int(y);
					break;
				}
			}
		}
		else
			r += putchar(format[i]);
		i++;
	}
	va_end(argn);
	return (r);
}
