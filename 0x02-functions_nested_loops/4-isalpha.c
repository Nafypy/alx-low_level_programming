#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Check if a character is alphabetic (lowercase or uppercase)
 * @c: Character to be checked
 * Return: 1 if c is a character, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
