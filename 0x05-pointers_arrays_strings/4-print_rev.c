#include "main.h"
#include <stdio.h>
/**
  * print_rev - Returns the length of a string.
  * @s: char pointer.
  * Return: length of a string.
  */
void print_rev(char *s)
{
	int length = 0;

	while (*(s + length) != 0)
	{
		count++;
	}

	for (int i = length - 1; i >= 0;i--)
	{
		_putchar(*(s + i));
	}

	_putchar("\n");
}
