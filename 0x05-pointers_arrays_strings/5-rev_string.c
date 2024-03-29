#include "main.h"

/**
 * rev_string - prints a reversed string
 * @s: pointer to an int to be updated
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *str, temp;
	int count = 0, i, j;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
