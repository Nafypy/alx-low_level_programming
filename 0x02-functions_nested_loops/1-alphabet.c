#include  "main.h"
#include <stdio.h>
/**
 * Print_alphabet - Print lowercase alphabet followed by a newline
 * Return: return 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}

