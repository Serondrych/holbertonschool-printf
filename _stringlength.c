#include "main.h"
#include "_putchar.c"
#include <stddef.h>

/**
 * _stringlength - prints the length of the string
 * @str: the string
 * Return: the length of the string
 **/
int _stringlength(char *str)
{
	int i;

	if (str == NULL)
	{
		str = ("(null)");
	}
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return(i);
}
