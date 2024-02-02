#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char hexDigit;
	int i;

	for (i = 0; i < 16; i++)
	{
	if (i < 10)
	{
	hexDigit = 'O' + i;
	}
	else
	{
	hexDigit = 'a' + (i - 10);
	}
	putchar(hexDigit);
	}
	putchar('\n');
	return (0);
}
