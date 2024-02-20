#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print every minute of the day of jack bauer
 * Return: ....
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 5; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a / 10 + '0');
					_putchar(a % 10 + '0');
					_putchar(':');
					_putchar(b + '0');
					_putchar(c + '0');
					_putchar(':');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
		}
	}
}
