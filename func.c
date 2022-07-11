#include "main.h"

/**
 * func - get the function according to the format
 * @c: the format
 * Return: to function
 **/
int (*func(char c))(va_list arg)
{
	form_t ff[] = {
		{"c", form_c},
		{"s", form_s},
		{"d", form_d},
		{"i", form_i}
	};
	int i;

	for (i = 0; i < 4; i++)
		if (ff[i].form[0] == c)
			return (ff[i].f);
	return (0);
}
