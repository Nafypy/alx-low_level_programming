#include "main.h"
#include <stdio.h>
/**
 * -abs - Computes absolute value of an integer
 *  @num: The integer for which to compute the absolute value
 *  Return: The absolute value of @num
 */
int _abs(int num)
{
	if (num > 0)
	{
		return (-num);
	}
	return (num);
}
