#include "main.h"
/**
 *printf_char - prints a char value
 *@val: is an argument
 *Return: 1
 *
 */
int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
