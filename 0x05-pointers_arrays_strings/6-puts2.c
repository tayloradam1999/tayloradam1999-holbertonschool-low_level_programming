#include "holberton.h"

/**
 * puts2 - Outputs every other char in a string
 * With a new line at the end
 * @str: The string to manipulate
 * Return: void
 */

void puts2(char *str)
{
	int x = 0;

	while (*(str + x))
	{
		_putchar(*(str + x));
		x = x + 2;
	}
	_putchar('\n');
}