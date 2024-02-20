#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Print a last digit of a number
 * @n - The number whose last digit is to be printed
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}


