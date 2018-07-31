#include "holberton.h"
#include <stdarg.h>

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
		{'c', char_arg},
		{'s', str_arg},
		{NULL, NULL}
	}

	for (i = 0; args[i].arg != NULL; i++)
	{
		if (*s == *args[i].arg)
		{
			return (args[i].f);
		}
	}
}
