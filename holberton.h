#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * struct arg - Struct op
 * @a: pointer type
 * @f: The function associated
 */
typedef struct arg
{
	char a;
	char *(*f)();
} arg_t;

int _strlen(char *s);
char *int_arg(int input);
char *str_arg(char *input);
char *char_arg(char input);
int _printf(const char *format, ...);

#endif /* HOLBERTON_H */
