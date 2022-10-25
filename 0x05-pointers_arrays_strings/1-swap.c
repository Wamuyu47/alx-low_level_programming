#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers a and b
 * @a: a pointer to an integer that will be swapped
 * @b: b pointer to an integer that will be swapped
 *
 * Return: void means that it is correct
 */
void swap_int(int *a, int *b)
{
	int w = *a;

	*a = *b;
	*b = w;
}
