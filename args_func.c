#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * char_arg - stringifies single character
 * @input - character input
 *
 * Return: stringified character
 */

void *char_arg(char input)
{
	char *output = malloc(sizeof(char) * 2);

	printf("input is %c\n", input);
	output[0] = input;
	output[1] = '\0';
	return ((void *)output);
}

/**
 * str_arg - passes string for _printf
 * @input: string argument
 *
 * Return: new string
 */
void *str_arg(char *input)
{
        unsigned int i;
        char *output = malloc(_strlen(input) + 1);

        if (output == NULL)
                return (NULL);
        printf("input not null\n");
        for (i = 0; input[i] != '\0'; i++)
        {
                printf("str i is %d\n", i);
                output[i] = input[i];
        }
        output[i] = '\0';
        return (output);
}
