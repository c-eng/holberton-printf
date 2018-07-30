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
	unsigned int i = 0, j = 0, k = 0;
	va_list plist;
	int argflag = 0, buffer_count = 0, bite_count = 0;
	char *buffer = malloc(sizeof(char) * 1024),  *store;

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
				if(format[i + 1] ==
				/* scan struct for flags and access function */
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
