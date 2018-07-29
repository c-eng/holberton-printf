#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void _putchar(c)
{
	return (write(1, &c, 1));
}

void _printstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}


int _printf(const char *format)
{
	int j = 0;

	while (format && format[j])
	{
		_putchar(format[j]);
		j++;
	}
}

void main()
{
	_printf("Hello");
}
