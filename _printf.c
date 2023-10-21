#include "main.h"

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the formated string
*/

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int printed = 0, char *p = format;

	while (*p != '\0')
	{
		if (*p != '%')
		{
			_putchar(*p);
			printed++;
		}
		else
		{
			if (*p == 'c')
			{
				_putchar(va_arg(args, int));
				printed++;
			}
			else if (*p == 's')
			{
				printed = printf_string(args, printed);
				printed++;
				}
			}
			else if (*p == '%')
			{
				_putchar('%');
				printed++;
			}
		}
	p++;
	}
	va_end(args);
	return (printed);
}
