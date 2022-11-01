#include "main.h"

/**
 * _memcpy - copies the memory area
 * @n: the bytes filled
 * @src: source memory area
 * @dest: destination memory area.
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
