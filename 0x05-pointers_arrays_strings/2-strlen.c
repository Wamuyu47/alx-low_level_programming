#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints the length of a string
 * @s: pointer to an int that will be updated
 *
 * Return: void means that it is correct
 */
int _strlen(char *s)
{
	int w;

	w = 0;
	while(s[w] != '\0')
	{
		w++;
	}
	return (w);
}
