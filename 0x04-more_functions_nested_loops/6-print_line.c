#include "main.h"

/**
 * print_line - print a straight line using '_'
 * @n: the number of '_' to be printed
 */
void print_line(int n)
{
	int wxy;

	if (n > 0)
	{
		for (wxy = 0; wxy < n; wxy++)
			_putchar('_');
	}

	_putchar('\n');
}
