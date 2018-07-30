#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

//print out string function
void _putchar(c)
{
	return (write(1, &c, 1));
}

void _printstr(char *str)
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

//character buffer
char *_charf(char *input)
{
	char *output = malloc(sizeof(char) + 1);
	output[0] = input[0];
	output[1] = '\0';
	return (output);
}

// get size of string and push into buffer
char *_stringf(char *input)
{
	char *output = malloc(_strlen(input) + 1);
	unsigned int i;

	for (i = 0; input[i] != '\0'; i++)
	{
		output[i] = input[i];
	}
	output[i] = '\0';
	return (output);
}

//concat string into buffer
char *_strcat(char *dest, char*src)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
