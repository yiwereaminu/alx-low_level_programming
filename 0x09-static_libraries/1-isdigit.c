#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Entry point
 *
 * @c: function variable
 *
 *Return: Always 0
 */

int _isdigit(int c)
{
	if ((c >= 0 || c >= '0')  && (c <= 9 || c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
