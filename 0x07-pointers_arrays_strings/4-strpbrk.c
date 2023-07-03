#include "main.h"

/**
 * _strpbrk - search a string.
 * @s - first character.
 * @accept - second character.
 * Return: number or null.
 */

char *_strpbrk(char *s, char *accept)
{
	int index, index2;

	for (index = 0; s[index] != 0; index++)
	{
		for (index2 = 0; accept[index2] != 0; index2++)
			if (s[index] == accept[index2])
				return (s + index);
	}
	return (0);
}
