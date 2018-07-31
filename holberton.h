#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * struct op - Struct op
 * @s: pointer type
 * @f: The function associated
 */
typedef struct arg{
	char a;
	void (*f)();
} arg_t;

int _strlen(char *s);
void *str_arg(char *input);
void *char_arg(char input);
void *(*_fun(char s))(void *);
int _printf(const char *format, ...);

#endif /* HOLBERTON_H */
