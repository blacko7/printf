#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct format
{
	char *id;
	int (*f)();
}match;
int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int prinf_string(va_list val);
int _strlenc(const char *str);
int _strlen(char *str);
int print_37(void);
int print_d(va_list args);
int print_i(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_exc_string(va_list val);
<<<<<<< HEAD
int print_HEX_extra(unsigned int num);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);
int print_revs(va_list args);
int print_rot13(va_list args);
=======
int print_pointer(va_list val)
int print_hex_extra(unsigned long int num);
>>>>>>> 771f4949655f4a148686f9bb01d95957aabffc55

 
#endif
