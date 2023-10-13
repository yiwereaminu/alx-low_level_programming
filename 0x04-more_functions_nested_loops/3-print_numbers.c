#include <stdio.h>
#include "main.h"

/**
 *print_numbers - entry point
 *this function prints out number from 0-9 followed by a new line.
 *Return: Always 0.
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i - '0');
	}
	_putchar('\n');
}
