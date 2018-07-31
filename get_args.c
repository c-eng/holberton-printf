#include <stdio.h>
#include "holberton.h"
/**
 * get_args_func - function pointer
 * @s: char type string
 *
 * Description: to call function arguments
 * Return: pointer to argument and function
 */
char (*get_args_func(char s))(void *)
{
	int i;

	arg_t args[] = {
		{'c', (void *)char_arg},
		{'s', (void *)str_arg},
		{0, NULL}
	};

	for (i = 0; args[i].a != 0; i++)
	{
		if (s == args[i].a)
			break;
	}
	return (args[i].f);
}
