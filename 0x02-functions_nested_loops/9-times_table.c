#include "main.h"
#include <stdio.h>
/**
 * times_table - print 9 times table, starting with 0
 * Return: always 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result < 10 && j != 0)

				_putchar(' ');
		}
				_putchar(result + '0');
				if (j != 9)
				{
					_putchar(' ');
					_putchar(',');
		}
		_putchar('\n');
	}
}
