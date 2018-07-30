#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include "holberton.h"

/**
 * bufferw - buffer write
 * @filedes: output stream: 1 for stdout
 * @buff: buffer address
 * @byte: number of bytes (characters) to print from the buffer
 *
 * Return: number of bytes written or -1 for error
 *

size_t bufferw(int filedes, const char *buff, size_t byte)
{

}
 */

/**
 * _printf - Main body of printf
 *
 *
 *
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0, bite_count =0;
	va_list plist;
	int argflag = 0, buffer_count = 0;
	char *buffer = malloc(sizeof(char) * 1024), *store;

	va_start(plist, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			argflag = 1;
		}
		else
		{
			if (argflag)
			{
				switch(format[i])
				{
				case 'c':
					store = _strcat(buffer, va_arg(plist, int));
					argflag = 0;
					break;
				case 's':
					store = _strcat(buffer, va_arg(plist, char *));
					argflag = 0;
					break;
				}
			}
			else
			{
				write(1, &format[i], 1);
			}
			i++;
		}
	}
	va_end(plist);
	return (0);
}
