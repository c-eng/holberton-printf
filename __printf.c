#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns length of str s
 * @s: string to be measured
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * _stringf - handles string arguments for printf
 *
 */

char *_stringf(char *input)
{
	char *output = malloc(_strlen(input) + 1);
	unsigned int i;

	printf("_stringf input is %s\n", input);
	printf("input is %lu big and output is %lu big\n", sizeof(input), sizeof(output));
	for (i = 0 ; input[i] != '\0' ; i++)
	{
		printf("input %d is %c\n", i, input[i]);
		output[i] = input[i];
		printf("output %d is %c\n", i, output[i]);
	}
	output[i] = '\0';
	printf("_stringf output is %s\n", output);

	return (output);
}


/**
 * _printf - Main body of printf
 *
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0, bite_count = 0;
	va_list plist;
	int argflag = 0, buffer_count = 0;
	char *buffer = malloc(sizeof(char) * 1024),  *store;

	va_start(plist, format);
	while (format[i] != '\0')
	{
		printf("Loop %d\n", i);
		if (format[i] == '%')
		{
			printf("flagged\n");
			argflag = 1;
		}
		else
		{
			/* argument handling */
			if (argflag)
			{
				switch(format[i])
				{
				case 'c':
					break;
				case 's':
					printf("Calling _stringf\n");
					store = (char *)_stringf(va_arg(plist, void *));
					argflag = 0;
					printf("unflagged\n");
					break;
				}
				for (j = 0 ; store[j] != '\0' ; j++)
				{
					printf("Copying %c\n", store[j]);
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
			/* non-argument handling */
			else
			{
				printf("Pushing %c\n", format[i]);
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
	/* end of format string */
	write(1, buffer, buffer_count);
	bite_count += buffer_count;
	free(buffer);
	va_end(plist);
	return (bite_count);
}
