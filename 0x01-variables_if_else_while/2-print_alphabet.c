#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char C;

	C = 'a';
	while (C <= 'z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}


