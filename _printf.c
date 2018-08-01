#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - Main body of printf
 * @format: Format string
 * @...: optional arguments
 *
 * Return: number of bites
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0;
	va_list plist;
	int argflag = 0, buffer_count = 0, bite_count = 0;
	char *buffer = malloc(sizeof(char) * 1024),  *store;

	if (format == NULL)
		return (-1);
	va_start(plist, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && argflag != 1)
		{
			argflag = 1;
		}
		else
		{
			if (argflag)
			{
				switch (format[i])
				{
				case '%':
					store = char_arg('%');
					break;
				case 'c':
					store = char_arg(va_arg(plist, int));
					break;
				case 's':
					store = str_arg(va_arg(plist, char *));
					break;
				case 'd':
				case 'i':
					store = int_arg(va_arg(plist, int));
					break;
				case ' ':
					return (-1);
				default:
					buffer[buffer_count] = '%';
					buffer_count += 1;
					store = char_arg(format[i]);
				}
				if (store[0] == '\0' && store[1] == '\0')
				{
					buffer[buffer_count] = '\0';
					buffer_count += 1;
					if (buffer_count == 1024)
					{
						write(1, buffer, buffer_count);
						bite_count += buffer_count;
						buffer_count = 0;
					}

				}
				for (j = 0 ; store[j] != '\0' ; j++)
				{
					buffer[buffer_count] = store[j];
					buffer_count += 1;
					if (buffer_count == 1024)
					{
						write(1, buffer, buffer_count);
						bite_count += buffer_count;
						buffer_count = 0;
					}
				}
				free(store);
				argflag = 0;
			}
			else
			{
				buffer[buffer_count] = format[i];
				buffer_count += 1;
				if (buffer_count == 1024)
				{
					write(1, buffer, buffer_count);
					bite_count += buffer_count;
					buffer_count = 0;
				}
			}
		}
		i++;
	}
	write(1, buffer, buffer_count);
	free(buffer);
	va_end(plist);
	bite_count += buffer_count;
	return (bite_count);
}
