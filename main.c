#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str = '\0';
	_printf("Hello %s", "world");
	printf("\n");

	_printf("%");
        printf("\n");

	_printf("%%");
        printf("\n");

	printf("%%\n");
	return (0);
}
