#include "main.h"
/**
  * puts_half - prints half of a string, followed by a new line.
  * @str: char pointer.
  *
  */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while ((*(str + i)) != 0)
		++i;
	if (i % 2 != 0)
		j = (i / 2) + 1;
	else
		j = i / 2;
	while ((*(str + j)) != 0)
	{
		_putchar((*(str + j)));
		j++;
	}
	_putchar(10);
}
