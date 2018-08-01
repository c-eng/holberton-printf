#include <stdio.h>
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

	if (output == NULL)
		exit(-1);
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
	char *output;

	if (input)
	{
		output = malloc(_strlen(input) + 1);
		if (output == NULL)
			exit(-1);
		for (i = 0; input[i] != '\0'; i++)
		{
			output[i] = input[i];
		}
		output[i] = '\0';
	}
	else
	{
		output = malloc(sizeof(char) * 7);
		output[0] = '(';
		output[1] = 'n';
		output[2] = 'u';
		output[3] = 'l';
		output[4] = 'l';
		output[5] = ')';
		output[6] = '\0';
	}
	return (output);
}

/**
 * int_arg - integer handling
 * @input: Input int
 *
 * Return: stringified int
 */

char *int_arg(int input)
{
	char *output;
	int len = 1, store = input, store2 = input;

	if (input == 0)
	{
		output = malloc(sizeof(char) * 2);
		output[0] = '0';
		output[1] = '\0';
		return (output);
	}
	if (input < 0)
		len += 1;
	for ( ; store /= 10 ; len++)
		;
	output = malloc(sizeof(char) * (len + 1));
	if (output == NULL)
		exit(-1);
	output[len] = '\0';
	len--;
	while (store2)
	{
		if (store2 < 0)
			output[len] = ((store2 % 10) * -1) + '0';
		else
			output[len] = (store2 % 10) + '0';
		store2 /= 10;
		len--;
	}
	if (input < 0)
		output[0] = '-';
	return (output);
}

/**
 * str_rev - function with one argument
 * @input: string input
 *
 * Description: reverse a string and add to buffer
 * Return: buffer of reverse string
 */
char *str_rev(char *input)
{
	char *buffer;
	unsigned int len, count;

	len = _strlen(input);
	buffer = malloc(_strlen(input) + 1);
	if (buffer == NULL)
		exit(-1);

	count = 0;
	while (input[count] != '\0')
	{
		buffer[count] = input[len - 1];
		count++;
		len--;
	}
	len += '\0';
	return (buffer);
}
/**
 * rot13 - function with one argument
 * @str: string input
 *
 * Description: rot13 conversion
 * Return: memory buffer
 */
char *rot13(char *str)
{
	char *input, *output;
	int count, count2;
	char *buffer;

	buffer = malloc(_strlen(str) + 1);
	if (buffer == NULL)
		exit(-1);
	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	count = 0;
	while (str[count] != '\0')
	{
		count2 = 0;
		while (input[count2] != '\0')
		{
			if (str[count] == input[count2])
			{
				buffer[count] = output[count2];
				break;
			}
			count2++;
		}
		count++;
	}
	return (buffer);
}
