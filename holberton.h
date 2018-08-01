#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
char *int_arg(int input);
char *str_arg(char *input);
char *char_arg(char input);
int _printf(const char *format, ...);
char *str_rev(char *input);
char *rot13(char *str);

#endif /* HOLBERTON_H */
