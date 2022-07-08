#include <stdarg.h>
#include <string.h>

/**
 * _printf - produces output according to a format
 * @format: the format
 * Return: the number of characters printed
 **/
int _printf(const char *format, ...)
{
	va_list args;
	int i, k = 0; length = 0

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (!k)
		{
			if (format[i] != '%')
			{
				length += _putchar(format[i]);
			}
			else if (format[i + 1] == '\0')
			{
				return (-1);
			}
			else k = 1;
		}
		else
		{
			switch (format[i])
			{
				case 'c':
					length += _putchar(va_arg(args, int));
					break;
				case 's':
					length += _stringlength(va_arg(args, char *));
					break;
				case '%':
					length += _putchar '%';
					break;
			}
			k = 0;
		}
	va_end(args);
	}
	return (length);
}
