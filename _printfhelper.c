#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

//print out string function
int _putchar(c)
{
	return (write(1, &c, 1));
}

int _printstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

// calculate length of string
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
