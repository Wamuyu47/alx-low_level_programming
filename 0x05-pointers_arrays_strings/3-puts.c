#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: a pointer to an int will be updated
 *
 * Return: void means that it is correct
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		_putchar(c[m]);
	}
	_putchar('\n');
}
