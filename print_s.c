#include "main.h"
/**
 *prinf_string - function to print a string
 *@val: argument
 *Return: the length of the string
 *
 */
int prinf_string(va_list val)
{
	char *str;
	int i;
	int length;

	str - va_arg(val, char *);
	if (str == NULL)
	{
		str = "(NULL)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}

