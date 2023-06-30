#include <stdio.h>
#include "main.h"
/**
  * cap_string - function that capitalizes all words of a string.
  * @a:char pointer
  *
  * Return: string.
  **/
char *cap_string(char *str) 
{
	int capitalize_next = 1;
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			capitalize_next = 0;
		}
		else if (isspace(str[i]) || ispunct(str[i]))
		{
			capitalize_next = 1;
		}
	}
	return str;
}
