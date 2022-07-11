#include "main.h"

/**
 * form_c - prints in %c format
 * @arg: argument to print
 * Return: length of printed argument
 */

int form_c(va_list arg)
{
	int a;

	if (arg)
	{
		a = va_arg(arg, int);
		_putchar(a);
	}
	return (1);
}

/**
 * form_s - prints in %s format
 * @arg: argument to print
 * Return: length of printed argument
 */

int form_s(va_list arg)
{
	int i;
	char *a;

	if (arg)
	{
		a = va_arg(arg, char *);
		if (a == NULL)
		{
			_putchar('(');
			_putchar('n');
			_putchar('u');
			_putchar('l');
			_putchar('l');
			_putchar(')');
			return (6);
		}
		for (i = 0; a[i]; i++)
			_putchar(a[i]);
		return (i);
	}
	return (0);
}

/** 
 * form_d - prints in %d format.
 * @arg: argument to print.
 * Return: an integrer.
 **/
int form_d(va_list arg)
{
	unsigned int abs, aux, num, account;
	int n;

	account = 0;
	n = va_arg(arg, int);
	if (n < 0)
	{
		abs = (n * -1);
		account += _putchar('-');
	}
	else
		abs = n;

	aux = abs;
	num = 1;
	while (aux > 9)
	{
		aux /= 10;
		num *= 10;
	}
	while (num >= 1)
	{
		account += _putchar(((abs / num) % 10) + '0');
		num /= 10;
	}
	return (account);
}
/**
 * form_i - prints in %i format
 * @arg: argument to print
 * Return: an int
 **/ 
int form_i(va_list arg)
{
	return (form_d(arg));
}
