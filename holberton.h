#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

convert format[] = {
	{"c", _charf},
	{"s", _stringf},
	{NULL, NULL}
}

int _printf(const char *format, ...);
int _strlen(char *s);
char *_stringf(char *input);
char *_charf(char *input);

#endif /* HOLBERTON_H */
