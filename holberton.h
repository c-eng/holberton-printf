#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * struct op - Struct op
 * @s: pointer type
 * @f: The function associated
 */
typedef struct args
{
	char *s;
	char (*f)(void *);
} arg_t;

int _printf(const char *format, ...);
int _strlen(char *s);
char *str_arg(char *input);
char *char_arg(char *input);
char (*get_args_func(char *s))(char);


#endif /* HOLBERTON_H */
