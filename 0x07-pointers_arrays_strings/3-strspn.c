#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: first character
 * @accept: second character.
 * Return: count.
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, index2, count;

	count = 0;
	for (index = 0; s[index] != 0; index++)
	{
		if (s[index] == ' ')
		{
			break;
		}
		else
			for (index2 = 0; accept[index2] != 0; index2++)
				if (s[index] == accept[index2])
					count++;
	}
	return (count);
}
