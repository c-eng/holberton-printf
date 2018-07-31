#include <stdlib.h>
#include "holberton.h"

/**
 * char_arg - stringifies single character
 * @input: character input
 *
 * Return: stringified character
 */
char *char_arg(char input)
{
	char *output = malloc(sizeof(char) * 2);

	output[0] = input;
	output[1] = '\0';
	return (output);
}

/**
 * str_arg - passes string for _printf
 * @input: string argument
 *
 * Return: new string
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
