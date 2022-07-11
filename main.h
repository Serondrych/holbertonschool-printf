#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct form
{
	char *form;
	int (*f)(va_list arg);
} form_t;
/**
 * all the created functions
 **/
int (*func(char c))(va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);
int form_c(va_list arg);
int form_s(va_list arg);
int form_d(va_list arg);
int form_i(va_list arg);

#endif
