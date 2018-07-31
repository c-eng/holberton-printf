#include <stdio.h>
#include "holberton.h"
/**
 * _fun - function pointer
 * @s: char type string
 *
 * Description: to call function arguments
 * Return: pointer to argument and function
 */
void *(*_fun(char s))(void *)
{
	int i;

	arg_t args[] = {
		{'s', (void *)str_arg},
		{0, NULL}
	};

	for (i = 0; args[i].a != 0; i++)
	{
		if (s == args[i].a)
			break;
	}
	return ((void *)args[i].f);
}
