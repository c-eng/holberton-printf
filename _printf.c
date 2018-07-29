#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

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
	unsigned int i = 0;
	va_list plist;
	char paramstore;
	int argflag = 0;
	/* char *buffer = malloc(1024); */

	va_start(plist, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			argflag = 1;
		}
		else if (argflag)
		{
			switch(format[i])
			{
			case '%':
				/* call _putchar on '%' */
				break;
			case 'c':
				paramstore = va_arg(plist, int);
				write(1, &paramstore, 1);
				argflag = 0;
				break;
			case 's':
				/*assign va_arg(plist, char *) to a temp
				  string, then iterate through string
				  printing each char, stop at \0 */
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
	va_end(plist);
	return (0);
}
