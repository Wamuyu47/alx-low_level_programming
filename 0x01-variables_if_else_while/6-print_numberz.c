#include <stdio.h>
/**
 * main - Prints numbers between 0 and 9.
 * 
 * Retuen: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
