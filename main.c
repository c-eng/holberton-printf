#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%s %c", "One", '1');	printf("\n");
	_printf("%c %s", '2', "Two");
	printf("\n");
	_printf("%c, %c, %c, %c, %c, %c, %c, %c, %c, %c", '0', '1', '2', '3', '4', '5', '6', '7', '8', '9');
	printf("\n");
        _printf("%% %% %c %% %s %%", '3', "Five");
        printf("\n");
	return (0);
}
