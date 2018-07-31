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
	void (*f)();
} arg_t;

int _strlen(char *s);
char *str_arg(char *input);
char *char_arg(char input);
void *(*_fun(char s))(char *);
int _printf(const char *format, ...);

#endif /* HOLBERTON_H */
