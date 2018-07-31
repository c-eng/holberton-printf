#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_string - function with 1 argument
 * @input: string argument
 *
 * Description: copy of string argument
 * Return: to variable with string
 */
char *str_arg(char *input)
{
	unsigned int i;
        char *output = malloc(_strlen(input) + 1);

	if (output == NULL)
		return (NULL);
        for (i = 0; input[i] != '\0'; i++)
        {
                output[i] = input[i];
        }
        output[i] = '\0';
        return (output);
}

/**
 * op_char - takes one argument
 * @input - character input
 *
 * Description: copy character to buffer
 * Return: copy of string
 */
char *char_arg(char *input)
{
	char *output = malloc(sizeof(char) + 1);

	if (output == NULL)
		return (NULL);
	output[0] = input[0];
	output[1] = '\0';
	return (output);
}
