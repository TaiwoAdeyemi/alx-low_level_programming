#include "main.h"
#include <stdio.h>
/**
 *_strlen - the length of a string.
 *@s: char pointer.
 *Return: length of a string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}
