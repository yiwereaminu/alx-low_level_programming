#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c - function variable
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return 1;
		}
		else 
		{
			return 0;
		}
	}	
}
