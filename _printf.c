#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: the format
 * Return: the number of characters printed
 **/
int _printf(const char *format, ...)
{
	va_list list;
	int i, k = 0, length = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

		va_start(list, format);
	for (i = 0; format[i] != '\0' ; i++)
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
			else
				k = 1;
		}
		else
		{
			switch (format[i])
			{
			case 'c':
				length += _putchar(va_arg(list, int));
				break;
			case 's':
				length += _string_print(va_arg(list, char *));
				break;
			case '%':
				length += _putchar('%');
				break;
			case '\n':
				_putchar(10);
				break;
			default:
				length += _putchar('%');
				length += _putchar(format[i]);
			}
			k = 0;
		}
	va_end(list);
	}
	return (length);
}
