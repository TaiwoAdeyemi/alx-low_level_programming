#include "main.c"
#include <stdio.h>
/**
 * _puts - print new string.
 * @str: char pointer.
 * Return: 
 */
void _puts(char*str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	_putchar('\n');
}
