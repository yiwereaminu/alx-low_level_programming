#include "main.h"

/**
 *swap_int - main entry
 *
 *@a: pointer to integer variable a
 *@b: pointer to integer variable b
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
	_putchar(*a + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(*b +'0');
}
