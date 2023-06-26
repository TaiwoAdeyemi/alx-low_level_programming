#include "main.h"
/**
  * print_rev - Returns the length of a string.
  * @s: char pointer.
  * Return: length of a string.
  */
void print_rev(char *s)
{
	int length;

	while (*s != 0)
	{
		length++;
		s++;
	}
	s--;
	while (length - 1 >= 0)
	{
		_putchar(*s);
		length--;
		s--;
	}
	_putchar(10);
}
