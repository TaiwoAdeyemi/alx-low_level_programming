#include "main.h"

/**
 * puts_recursion - print a string.
 * @s: char pointer
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
		return;
	}
} 	
