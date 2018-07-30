#include "holberton.h"

/**
 * get_args_func - function pointer
 * @s: char type string
 *
 * Description: to call function arguments
 * Return: pointer to argument and function
 */
char (*get_args_func(char *s))(char)
{
	int i;

	args arg_t[] = {
		{'c', char_arg},
		{'s', str_arg},
		{NULL, NULL}
	}

	for (i = 0; arg_t[i].args != NULL; i++)
	{
		if (*s == *arg_t[i].args)
		{
			return (arg_t[i].f);
		}
	}
}
