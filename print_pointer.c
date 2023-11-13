#include "main.h"

/**
<<<<<<< HEAD
 * print_pointer - prints a pointer
 * @val: arguments
 * Return: integer
=======
 * print_pointer - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
>>>>>>> 771f4949655f4a148686f9bb01d95957aabffc55
 */
int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
<<<<<<< HEAD
	int y, i;
=======
	int y;
	int i;
>>>>>>> 771f4949655f4a148686f9bb01d95957aabffc55

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_hex_extra(x);
	return (y + 2);
}
