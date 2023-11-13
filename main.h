#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stadarg.h>

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
int print_pointer(va_list val)
int print_hex_extra(unsigned long int num);

#endif
