#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	unsigned int i = 0, bite_count = 0;
	va_list plist;
	int argflag = 0, buffer_count = 0;
	char *buffer = malloc(sizeof(char) * 1024);

	va_start(plist, format);
	while (format[i] != '\0')
	{
		printf("Loop %d, bufsize %d\n", i, buffer_count);
		/* non-argument handling */
		printf("Pushing %c\n", format[i]);
		buffer[buffer_count] = format[i];
		buffer_count += 1;
		if (buffer_count == 1024)
		{
			printf("fatbuf\n");
			write(1, buffer, buffer_count);
			bite_count += buffer_count;
			buffer_count = 0;
		}
		i++;
	}
	/* end of format string */
	write(1, buffer, buffer_count);
	printf("kthxbai\n");
	bite_count += buffer_count;
	free(buffer);
	va_end(plist);
	return (bite_count);
}
