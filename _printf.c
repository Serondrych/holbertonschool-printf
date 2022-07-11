#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: the format
 * Return: the number of characters printed
 **/
int _printf(const char *format, ...)
{
	int i, length = 0;
	va_list arg;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			length++;
		}
		else if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				length++;
			}
			else if (format[i] != '\0')
			{
				if (func(format[i]))
					length += func(format[i])(arg);
				else if (func(format[i]) == 0)
				{
					_putchar('%');
					_putchar(format[i]);
					length += 2;
				}
			}
			else
				return (-1);
		}
	}
	va_end(arg);
	return (length);
}
