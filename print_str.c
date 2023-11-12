#include "main.h"
/**
 *@_strlen: functions that tells the length of a string
 *@str: string pointer
 *Return: i
 *
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return(i);
}

/**
 *@_strlen: strlen function for constant char pointers
 *@str: argument
 *Return: i
 *
 */
int _strlenc(const char *str)
{
        int i;

        for (i = 0; str[i] != 0; i++)
                ;
        return(i);
}
