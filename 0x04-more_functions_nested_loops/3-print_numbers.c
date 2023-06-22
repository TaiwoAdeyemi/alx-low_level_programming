#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;
	char numbers[] = "123456789\n";

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(numbers[i]);
	}
	_putchar('\n');
}
