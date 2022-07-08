#include "main.h"

/**
* _putchar - writes a character
* @c: the character
* Return: the character
**/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
