#include <stdio.h>
#include "holberton.h"
/**
 * _fun - function pointer
 * @s: char type string
 *
 * Description: to call function arguments
 * Return: pointer to argument and function
 */
char *(*_fun(char s))(char *)
{
	int i;

	arg_t args[] = {
		{'s', str_arg},
		{0, NULL}
	};

	for (i = 0; args[i].a != 0; i++)
	{
		if (s == args[i].a)
			break;
	}
	return (args[i].f);
}
