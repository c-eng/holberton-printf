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
	_printf("Hello %s", "world");
	printf("\n");

	_printf("%");
        printf("\n");

	_printf("%%");
        printf("\n");

	_printf("\0");
	printf("\n");

	_printf("This checks the null: %c", '\0');
	printf("\n");

	_printf("NULL");
	printf("\n");
	return (0);
}
